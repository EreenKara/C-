#include <iostream>
using namespace std;

// class Sayi
// {
// private:
//     int sayi;
// public:
//     Sayi()
//     {
//         this->sayi=int();
//     }
//     Sayi(int sayi)
//     {
//         this->sayi=sayi;
//     }
//     friend ostream& operator<<(ostream& ekran,Sayi number)
//     {
//         ekran<<number.sayi;
//         return ekran;
//     }
// };

template<typename T>


class Sayi
{
private:
    T sayi;

public:
    Sayi()
    {
        this->sayi=T();
    }
    Sayi(T sayi)
    {
        this->sayi=sayi;
    }
    friend ostream& operator<<(ostream& ekran,Sayi number)
    {
        ekran<<number.sayi;
        return ekran;
    }
};

int main()
{
    
    Sayi<int> s=Sayi<int>(10);
    cout<<s;
    
    Sayi<Sayi<int>> s2=Sayi<Sayi<int>>(s);
    cout<<s2;


}


