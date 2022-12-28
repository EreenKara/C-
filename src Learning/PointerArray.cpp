#include <iostream>

using namespace std;

class Kisi
{
public:
    string isim;
    int yas;

    Kisi()
    {
    }
    Kisi(string ism)
    {
        isim = ism;
        yas = 0;
    }
    friend ostream &operator<<(ostream &ekran, Kisi &sag)
    {
        ekran << sag.isim << endl;
        return ekran;
    }
};
int main()
{

    Kisi *kisiler = new Kisi[10]; // Bu mümkün yani bir pointe rbir class dizisi tutuyor

    // Kisi** kisi1=new Kisi[2][3];    // Bu kullanım ynalış bir kullanım olmaması gerek bir satırda matris oluşturamayız.
    Kisi kisi2[4][4];  // Bu doğru bir kullanım.
    kisi2[1][2].yas = 20;
    cout << kisi2[1][2].yas;

    Kisi **kisilerDizi = new Kisi *[10]; // Bir matris başlatmat için for dögüsü kullanmak şart.
    for (int i = 0; i < 10; i++)
        kisilerDizi[i] = new Kisi[10]; 

    int** sayiDizisi=new int*[10];
    for (size_t i = 0; i < 10; i++)
    {
        sayiDizisi[i]=new int[10];
    }
    kisiler[9].isim="Merhaba";
    kisilerDizi[1][2].isim="Naber";

    cout<<kisiler[9].isim;

    return 0;
}