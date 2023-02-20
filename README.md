# roket-sensor
Sensörlerden değer okuma ve sensörleri konfigüre etme gibi işlemler, seri haberleşme 
protokolleri ile sensöre bağlanıp içerisindeki hedef registerı adresleyip bu registerdan 
okuma yazma işlemi yaparak gerçekleşir.
BNO055 IMU modülü içindeki İvmeölçer Jiroskop ve Manyetometrenin 
konfigürasyon değerlerini oluşturan terminal bazlı uygulama C dilinde kodlanmıştır.
Bu uygulamada her konfigürasyon parametresi için datasheet üzerinden enum değerler oluşturulup,
bu değerler programın başında oluşturulan bir değişkene atanmıştır. Program çalıştığında 
konfigürasyonu yapmak için registera değerler decimal, hexadecimal ve binary olarak gösterilmiştir.
![image](https://user-images.githubusercontent.com/112398836/220173856-d6522206-11e1-4ceb-8770-bd488389c99a.png)
