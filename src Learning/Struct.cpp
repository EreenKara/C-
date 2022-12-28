#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;


struct sure
{
    int saat;
    int dakika;
    
};

struct takvim
{
    int yil;
    int ay;
    int gun;
    sure tarih;
    
};


// Struct anahtar kelimesi sadece ilk tanımlamada geçerli aynı class'taki gibi benim asıl değişken ismin Struct'tan sonra yazdığım
// değer. struct takvim yazdıysam işlerimi takvim ile görmem gerekli. Benim int gibi olan değişkenim.

takvim Bul(takvim t)
{
    return t;
} 


int main()
{
    srand(time(0));
    setlocale(LC_ALL,"Turkish");
    takvim simdi={2022,10,17,20,10}; // tarih.dakika'nın cıktısı 10 
    
    int dizi[5]={1,2};
    for (size_t i = 0; i < 5; i++)
    {
        cout<<dizi[i]<<endl;
    }
    
    char isim[]="Eren";
    cout<<toupper(3);

}

