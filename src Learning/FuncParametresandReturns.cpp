#include <iostream>
#include <time.h>
#include <fstream>
#include <string>
using namespace std;

struct variables
{
    int number;
    string name;
};

// 2 den fazla değer döndürmek istediğim bir fonksiyon olduğu varsayılırsa
variables structFonk()
{
    variables v1;
    v1.name="Eren";
    v1.number=0555555555;

    return v1;

}
void refferenceFonk(int& _number, string& _name)
{
    _number=0555555;
    _name="Eren";

}

// refference ile göndermeden farklı olarak göndermek istemediğimiz parametre için nullptr değeri verebiliriz 
// içerde de atama işlemi gerçekleşmez.
void pointerFonk(int* _number, string* _name)  
{
    if(_number)
    {
        *_number=0555555;
    }
    if (_name)
    {
        *_name="Eren";
    }
}

int main()
{
    variables outVariable;
    outVariable=structFonk();

    int sayi;
    string isim;
    refferenceFonk(sayi,isim);

    int sayi2;
    string isim2;
    pointerFonk(&sayi2,&isim2);
    pointerFonk(nullptr , &isim2); // sadece isim için bir parametre alırız


    return 0;
}