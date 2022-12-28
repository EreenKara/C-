#include <iostream>

using namespace std;

class Sayi
{
private:
    int deger;
    public:
        Sayi(int dgr)
        {
            deger = dgr;
        }
        Sayi()
        {
            deger = 25;
        }
        friend ostream &operator<<(ostream &ekran, Sayi &sag)
        {
            ekran << "deger:" << sag.deger << endl;
            return ekran;
        }
        ~Sayi()
        {
            cout << "destructor called" << endl;
        }

};

int main()
{
    // Sadece pointer oluşturldu içi boş bir yeri göstermiyor sınıfı göstermiyor.
    Sayi *s; 
    Sayi *s1 = new Sayi(100);
    Sayi *s2 = s1;
    // new ile kullanmamamıza izin vermiyor çünkü Sayi sınıfının bir pointerını oluşturmadık. Ayrıca Stack2te alan ayırıyor.
    Sayi s3 =  Sayi(); 
    // delete s1;
    // Sayi *s3 = new Sayi(1789);
    cout << "s2:" << *s2 << endl;

    int *p1=new int(25);
    int *p2=p1;

    delete p1;
    cout << "p2:" << *p2 << endl;

    return 0;
}