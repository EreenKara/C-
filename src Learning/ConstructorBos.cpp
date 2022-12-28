#include <iostream>

using namespace std;

class Sayi
{
private:
    int number;
public:

    // neden boş bir constructor tanımlamak zorundayız Cunku egerki biz çok fazla nesne dizisi olusturacak isek parametre
    // almayan constructor yok ise bunları baslatabilmek icin yapmamız gereken herbirine baslangıc degeri vermek bu da for ile
    // mumkun. Ancak bos bir constructor oldugu takdirde biz ilk deger ataması ypamadan for kullanmadan nesneleri olusturabiliyoruz.

    Sayi() 
    {
        number=0;
    }
    Sayi(int value)
    {
        number=value;
    }
};

int main()
{
    // Sayi kisiler[10]; // Derleyeici parametresiz constructor olmadıgından doalyı bunu kabul etmiyro.
    Sayi **kisiler = new Sayi *[10];
    
    for (int i = 0; i < 10; i++)
        kisiler[i] = new Sayi(3);

    for (int i = 0; i < 10; i++)
        delete kisiler[i];
        
    delete [] kisiler;


    
    
    
}