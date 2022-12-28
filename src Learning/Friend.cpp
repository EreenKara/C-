#include <iostream>
using namespace std;

// Friend kelimesi classların dışından klassın private ve protected alanlarına erişim için kullanılan bir yöntem.
// Dışarıdaki bir fonksiyonu class'ın içerisine fried oalrak yazdığımız takdirde dışarıdaki bu fonksiyon class'ın özel alanlarına
// erişebiliyor. Globak fonksiyonlar için bu geçerli. Eğer iki sınıf için böyle bir şey yapmak istiyorsak ya da class'ın 
// içerisindeki bir fonksyion için  bu sefer friend class Sayi gibi bir tanımalma ile iki sınıfı arkadaş etmemiz gerekli.
// ama sonuçta bu encapsulation'un doğasına biraz aykırı o yüzden çok fazla yapmamak gerekir.
// Çok fazla arkadaşın olmasın gerçekten dost diyebileceğin bir kaç tane arkadaşın olsun
// Frinedship in classes is not mutual(karşılıklı) Yani Hesaplama sınfı Sayı fonskiyonun private alanlarını kullanbilirken
// SAyi sınıfı Hesaplama sınıfının özel alanlarını kullanamz.


class Sayi
{
private:
    int sayi;
    int number;
public:
    void Hesapla()
    {
        // BOŞ
    }

    friend void Yazdir1(Sayi);
    friend class Hesaplama;     // Bu iki şekilde kullanbiliyoruz frined anahtar kelimesini.
};

void Yazdir1(Sayi sayi)
{
    cout<<sayi.sayi;
}


class Hesaplama
{
private:
public:
    void Yazdir2(Sayi sayi)
    {
        cout<<sayi.sayi;
    }
};

int main()
{
    




    
}
