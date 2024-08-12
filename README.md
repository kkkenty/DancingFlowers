# 生花舞
ソレノイドコンテスト2024に応募した作品です。イグソレコン賞を受賞しました。  
結果発表URL：https://www.takaha.co.jp/co/solcon/slcn-pblctn11/  

## 作品の概要
ソレノイドを利用し、花が音楽に合わせてダンスします。内蔵されたマイクが音を感知し、そのテンポに応じて花が揺れ動きます。素朴な雰囲気を一気に活気づけ、音楽をより鮮やかに演出します。  

[![【第11回ソレコン応募作品】生花舞（いけばなまい）](https://github.com/user-attachments/assets/965c1b0b-f41a-4d72-8f61-d418c31ad5a0)](https://www.youtube.com/watch?v=IBFXMKEMeKs)
作品動画：https://www.youtube.com/watch?v=IBFXMKEMeKs

## システム構成
<img src="https://github.com/user-attachments/assets/8a769f27-a168-45a2-aa1f-cfa41bf0aacf" width="550px">  
<img src="https://github.com/user-attachments/assets/7a0d0a29-edba-4111-bd63-e39bd7ccfe4b" width="450px">  

<!--
<p align="center">
  <img src="https://github.com/user-attachments/assets/8a769f27-a168-45a2-aa1f-cfa41bf0aacf" width="800px">  
  <img src="https://github.com/user-attachments/assets/7a0d0a29-edba-4111-bd63-e39bd7ccfe4b" width="800px">  
</p>
-->

## 部品リスト
- [音センサ](https://www.aitendo.com/product/14874)  
- LED  
- [ソレノイド CA12500190](https://www.takaha-shop.com/SHOP/ca1250.html)  
- [ソレノイド基板](https://www.takaha-shop.com/SHOP/sb-6565-01.html?_gl=1*1v7hibs*_ga*MTg0NTA4OTg1LjE3MjE0NjY4NTE.*_ga_NLHW3KSNBB*MTcyMzQ1OTAxMC40LjAuMTcyMzQ1OTAxMC42MC4wLjA.)  
- Arduino  
- 9V乾電池
- [ACアダプタ](https://www.amazon.co.jp/12V-36W-1-8M%E3%83%AD%E3%83%B3%E3%82%B0%E9%9B%BB%E6%BA%90%E3%82%A2%E3%83%80%E3%83%97%E3%82%BF%E3%83%BC%E3%80%81AC-DC%E3%82%B9%E3%82%A4%E3%83%83%E3%83%81%E3%83%B3%E3%82%B0%E3%82%A2%E3%83%80%E3%83%97%E3%82%BF%E3%83%BC%EF%BC%88%E5%85%A5%E5%8A%9B100-240V%E3%80%81%E5%87%BA%E5%8A%9B12%E3%83%9C%E3%83%AB%E3%83%883%E3%82%A2%E3%83%B3%E3%83%9A%E3%82%A23000mA%EF%BC%89%E3%80%81DC-5-5x2-1mm%E5%A3%81%E6%8E%9B%E3%81%91%E5%A4%89%E5%9C%A7%E5%99%A8%E5%85%85%E9%9B%BB%E3%83%97%E3%83%A9%E3%82%B0/dp/B0CF9SJHM1/ref=sr_1_3_sspa?keywords=ac%E3%82%A2%E3%83%80%E3%83%97%E3%82%BF%E3%83%BC%2B12v%2B3a&qid=1706496450&sr=8-3-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)  

## フォルダ構成
- demo
  - demo.ino
  - ↑ Arduinoのソースコード。
- STL
  - SolenoidBox_v3 v17.stl ×1
  - FlowerHolderLarge_v3 v5.stl ×1
  - Spacer v1.stl ×2
  - TopCover v6.stl ×1
  - ↑ 3Dプリンタ部品のデータ。部品を組み合わせると、下図のようになります。

<img src="https://github.com/user-attachments/assets/883503d0-e7b6-4448-bb72-71cda4af8715" width="400px">  
<img src="https://github.com/user-attachments/assets/0f4ab7c6-f704-4334-941e-2061a9dc3bb1" width="500px">  
