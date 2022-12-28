#include <iostream>
using namespace std;

template<typename T>
class Dizi
{
private:

public:
    void ekle(T yeni);
    T getir(int index);
};

template<typename T>
T Dizi<T>::getir(int index)
{
    
}

// template<typename T,typename B>
// class Dizi2
// {
// private:

// public:
//     void ekle(T yeni);
//     T getir(int index);
// };

// template<typename T,typename B>
// T Dizi2<T,B>::getir(int index)
// {
    
// }


int main()
{
    // Dizi2<int,float> d;
    Dizi<int> d;   // ilk önce bir int olan sınıf üretiyor sonra nesne üretiyor.
    
}