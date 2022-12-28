#include <iostream>
using namespace std;



// Class mantığında int main'i kullanacak olan kişiyi müşteri olarak düşün ve int main'in içerisine yazdığın her şey
// Sanki bir başkası tarafından yazılıyormuş gibi. Örneğin bir oyunda sağa dönülcekse bu int main'in içerisinde
// gerçekleşecek arka planda ben Karakter sınıfımda sağa dön fonksiyonunu çağıracağım. Yani müşteri, oyuncu int main'de 
// bir talep gönderecek kullanmak istediği fonksiyona dair. Ben ise arkada her şeyi halledip ona bir sonuç üreteceğim.

// Şuanda sınıflar gizlenmemiş gibi görünebilir ancak bizler ileride bu dosyaları .hpp .cpp olarak ayırarak müşteriye vereceğiz
// Onlar sadece bizim sınıflarımızdan nesne üretecekler ve bizim izin verdiğimiz fonksiyonları kullanacaklar. İçeriklerini 
// göremeyecekler çünkü onlarda sadeece başlık dosyaları olacak.

class Insan
{
public:
    int sayi1=5; 
    // Insan kisi; // bir sınıf içerisinde kendini çağıramazsın
    // Insan* kisi  // ancak kendisini 

    int alanbul() // Fonksiyona static anahtar kelimesini verip nesne oluşturmadan da ben fonksiyonu çağırabilirim.
    {
             
    }
};

int main()
{
    // Sınıflardan ne kadar nesne oluşturursan oluştur sınıfın fonksiyonları sadece bir defa oluşturulurlar.
    // Arkadaki işlem fonksiyonu alır ve derki sen şu nesnenin değişkenlerini manipüle et. 
    // Ama fonksiyon 1 tanedir. Parametre değişiyor gibi. İlk nesne oluşturulduğunda fonksiyonlar oluşturuluyor.
    // Fonksyionlar nesnelerden ayrı gibi düşünülebilirler. Ancak sınıfa aitler ve Nesneyi manipüle ediyorlar bu yüzden 
    // herhangi bir nesne ile birlikte erişmek şart. Eğerki static kelimesini bir fonksiyonda kullandıysan 
    // o fonksyion nesnesiz erişilebileceği için senin herahngi static olmayan bir nesnenin değişkenini kullanmaman gerek 
    // o fonksiyonun içerisinde. Fonksiyon hangi değişkeni kullanması gerektiğini bilemez.
    // Bu arada normal fonksiyonlar oluşturulduklarında hafızada yer kaparlar.
    
    Insan insan1=Insan(); 
    insan1.alanbul();
    
}