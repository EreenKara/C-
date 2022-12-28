#include <iostream>
#include <string>
using namespace std;


// template ve typename kısmı bunun tanımlanma stili orası değişmiyor. Şu şekilde değişebilir ancak bir şey farketmiyor.
// typename yazan kısma class getirebiliriz ama sonuç değişmiyor.

// Template'in kullanım amacına geldiğimizde ise template'ler dillerde var olan type'lar için bize genel bir tanım yapıyor
// Yani ben diyorumki benim bir tipim olacak ne olduğu farketmez. Bu bir sınıf olabilir integer olabilir veya benzeri dilin 
// izin verdiği bir şey olabilir. sen bunu al ne olduğunu farket ve kullan. Bize bir esneklik sağlıyor.  

// ve en önemli kısmı template yazdığımızda bir sonraki yazılan neyse onu bir şablon olarak görüyor. Ama sadece ve sadece
// ondan bir sonraki yazılanı yani fonksiyon yazdıysan fonskiyonu class yazdıysan class'ı template yapıyor.

// Ayrıca Template kullanıyorsan hpp cpp gibi dosya ayrımları yapamıyorsun hepsinin bir dosyada olması gerekiyor.

template<typename T> 


// Önemli olan kriter fonksiyonun içerisindeki işlemlerin hepsi için geçerli olması
// aşağıdaki fonksiyon içinde void bir değer göndersem geçerlilik kaybolur. Program hata verir.
// ayrıca referans değer gönderdiğimiz için bu normal T değeri göndermekten farklı
// Kısacası T'yi herahangi bir tip gibi düşün ve işlem yap 
// (T& value) ise (int& value) , (string& value) olabilir gibi düşün 


T Yazdir (T value)
{
    cout<<value<<endl;
    return value;
}

// template<typename T>

// T Yazdir(T value, T value2)
// {
//     return value;
// }

int main()
{
    int a=5;
    Yazdir<int>(a); // kullandığın yerde tipini belirtmek önemli
    // Yazdir<void>(5); //değer döndürmüyor. 


}



// ben neden sınıfların içerisinde fonksiyon overloading yaptığımda onu friend olarak tanımlamak zorundayım. templates2 örnek var.
// structlarda da public olarak bunu kullanıyoruz ama orda friend demeye gerek yok.
// ben 2 sınıfı birbiri içlerinde kullanırsam ne olur 
// örneğin sayi sınıfı içerisinde kisi sinifını kisi sınfıı içerisinde sayi sinifini.
