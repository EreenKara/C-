#include <iostream>
#include <list>
using namespace std;

class Sayi 
{
private:
public:
    int sayi=5;
};

void operator<<(Sayi sayi,ostream& ekran ) // parametrelerin sırasının önemi var 
{

}

// fonksiyonlar normal birer fonksiyon gibi içlerine istediğimi yazabilirim.
// Normalde bu operator ile kullanımda olan operand'ları tekrar overload edemem.
void operator<<(Sayi sayi1,int sayi ) 
{
    int number;
	cin>>number;	
}

// Eğerki ostream döndürürse fonksiyon bir satırda birde fazla << kullanabilirim yoksa hata verecek  
// Çünkü ostream << Class << Class gibi bir yapı oluşacak
ostream& operator<<(ostream& ekran,Sayi sayi) 
{

    return ekran;
}
struct MyCollection
{
    list<Sayi> sayilarim;

    // Burda tek bir parametre vermemizin sesbebi eğerki bir member fonksiyonsa ilk parametre 
    // etkin olacak member fonksiyon olduğundan dolayı. Diğeri global fnksiyon olduğundan dolayı 2 parametre verdik.
    // Kısacası parametre vermeye gerek yok zaten direkt olarak ulaşabileceği bir konumda sınıfın içerisinde
    // Neden sınfıın değişkenlerini parametre olarak verelim ki.
    void operator+=(Sayi sayi)
    {
        this->sayilarim.push_back(sayi);
    }


};


int main()
{
    Sayi sayi1= Sayi();
    int number=2;
	sayi1<<cout;
    
    // Şeklinde fonksiyon olarak cağırabiliyoruz.
    operator<<(cout,sayi1); 

}