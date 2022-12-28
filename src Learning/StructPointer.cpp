#include <iostream>
using namespace std;

struct Dikdortgen
{
    int Yukseklik;
    int Genislik;

};

class Sayi
{
    public:
    int a;
};

Sayi Bul(Sayi b)
{
    cout<<"naber";
    return b;
    
}

int AlanBul(Dikdortgen* d1)
{
    // Eğerki sınıflara veya yapılara pointerlar aracılığı ile erişmeye çalışıyorasn nokta yerine -> işaretini kullanman gerek.
    // Yoksa hata verir.
    return d1->Genislik*d1->Yukseklik;
}
int AlanBul2(Dikdortgen& d1)
{
    // Ancak pointer yerine referans işaretini kullanırsan . kullabilirsin.
    return d1.Genislik*d1.Yukseklik;
}
Dikdortgen* Genislet(Dikdortgen* eskialan,int eskiboyut,int eklenecek)
{
    Dikdortgen* d1=new Dikdortgen[eskiboyut+eklenecek];
    for (size_t i = 0; i < eskiboyut; i++)
    {
        d1[i].Genislik=(eskialan+i)->Genislik;   // eğerki d1[i] işareti kullanacaksan . kullanabilrisn
        d1[i].Yukseklik=(eskialan+i)->Yukseklik; // ancak pointer aritmetiğini kendin yapcaksan -> kullanmalısın.
    }
    
    
    
    return eskialan;
}


int main()
{
    Sayi s;
    s.a=3;
    Dikdortgen d;
    d.Genislik=5;
    d.Yukseklik=6;
    AlanBul2(d);
    Bul(s);
    
}