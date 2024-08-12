int const SOLO = 2;   //変数宣言SOLを2と定義
int const SOLO2 = 3;  //変数宣言SOLを3と定義
int const SOLO3 = 4;  //変数宣言SOLを4と定義
int const SOLO4 = 5;  //変数宣言SOLを5と定義
bool isson = false;
int t = 0;
/*
制御則
利用するピンはデジタルピンの0-7とGNDピン２本
Degital Outに設定可能なのはD2-D5番ピンでそれぞれが1-4ポートに対応
*/
// ポート指定用変数設定
int d8_in_port = 8;   // センサ デジタル情報入力
int a0_in_port = A0;  // センサ アナログ情報入力

// 受信データ用変数設定
int d8_data;  // digitalデータ用
int a0_data;  // analogデータ用
// 電圧値変換用変数
float v_data;

float cabmax = 0;     //キャリブレーションの最大値
float cabmin = 9999;  //キャリブレーションの最小値

// 状態表示用LEDのピン設定
int const LED_GRN = 9;
int const LED_RED = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(SOLO, OUTPUT);   //２番ピンに接続ソレノイドを出力に設定
  pinMode(SOLO2, OUTPUT);  //２番ピンに接続ソレノイドを出力に設定
  pinMode(SOLO3, OUTPUT);  //２番ピンに接続ソレノイドを出力に設定
  pinMode(SOLO4, OUTPUT);  //２番ピンに接続ソレノイドを出力に設定
  // シリアルモニタ通信速度設定
  Serial.begin(9600);
  // ポート設定
  pinMode(d8_in_port, INPUT);  // センサ情報入力設定
  pinMode(LED_GRN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  Serial.println("Calibration started");
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_GRN, LOW);
  for (int i = 0; i < 500; i++) {
    a0_data = analogRead(a0_in_port);  // アナログデータ
    v_data = (float)a0_data / 1024.0f * 5.0f;
    if (v_data > cabmax) {
      cabmax = v_data;
    }
    if (v_data < cabmin) {
      cabmin = v_data;
    }
    delay(10);
  }
  Serial.println("Calibration completed");
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_GRN, HIGH);
}

void loop() {

  // 音センサからの情報取得
  a0_data = analogRead(a0_in_port);   // アナログデータ
  d8_data = digitalRead(d8_in_port);  // デジタルデータ
    // 受信データをシリアルモニタへ出力
  // 電圧表現に変換計算
  v_data = (float)a0_data / 1024.0f * 5.0f;
  // シリアルモニタへ出力
  //  Serial.println( a0_data );
  //  Serial.println( v_data );
  Serial.println(a0_data);
  //Serial.println(d8_data);
  //Serial.println(v_data);


  if (isson == false && t > 20) {
    if (v_data > cabmax || v_data < cabmin) {
      digitalWrite(SOLO, HIGH);
      digitalWrite(SOLO2, HIGH);
      digitalWrite(SOLO3, LOW);
      digitalWrite(SOLO4, LOW);
      Serial.println("on");
      isson = true;
      t = 0;
    }
  } else if (isson == true && t > 20) {
    if (v_data > cabmax || v_data < cabmin) {
      digitalWrite(SOLO, LOW);
      digitalWrite(SOLO2, LOW);
      digitalWrite(SOLO3, HIGH);
      digitalWrite(SOLO4, HIGH);
      isson = false;
      t = 0;
    }
  }
  t++;
  // 10m秒待機
  delay(10);
  // put your mvain code here, to run repeatedly:
  // delay(100);
  //digitalWrite(SOLO, HIGH);
  //delay(100);
  //digitalWrite(SOLO, LOW);
}
