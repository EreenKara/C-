#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

void ekle(int a)
{
    cout<<"integer "<<endl;
}
void ekle(string b)
{
    cout<<"string "<<endl;
}
void ekle(double c)
{
    cout<<"double "<<endl;
}
void ekle(float c)
{
    cout<<"float "<<endl;
}
void ekle(int a,int b)
{
    cout<<" int int "<<endl;
}
// int ekle(int a,int b)    || Bu şekilde bir tanımalam olmuyor dönüş tipini değiştirerek overloading yapılamıyor.
// {
//     cout<<" int int int"<<endl;
// }


int main()
{
    ekle(1);
    ekle(2.0);
    ekle(2.0f);
    ekle("nber");



}