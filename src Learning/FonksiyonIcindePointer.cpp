#include <iostream>

using namespace std;

// normal & gibi düşün ama pointerı böyle kullan . Normalde biz referans yaptığımızda nasıl kullanıyorduk değişkeni
// aynısı ama pointe rolarak düşün.
void Degistir(int *&p) 
{
    *p = 25;
    //p=NULL;
}



// Burdaki & işareti pointerla nerdeyse aynı ancak burda pointer'ın adresini değiştiremiyoruz. 
// referans'lar const'tur değiştirilemezler. İlk değeri atadığında o kalır.
// pointer'lar daha esnek bir kullanım sunuyor ancak Sınıflarda -> yazmaktan kurtulmak yerine tercih ediiyor.
// Syntax'ı daha kolay hale getirmek için geliştirilmiş bir yapı.
// kayhan ayar 9b videosunda güzelce anlatıyor struct'lı olanın ortalarında.
void Bul(int& a) 
{
    
    cout<<a*3<<endl;
}


int main()
{
    int x = 200;
    int *r=&x;
    Degistir(r);
    cout << *r << endl;
    return 0;
}
