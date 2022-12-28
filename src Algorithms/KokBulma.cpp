#include <iostream>
#include <math.h>

using namespace std;

int Delta(int a,int b, int c);
int KokHesapla1(int a,int b, int delta );
int KokHesapla2(int a,int b, int delta );

int main()
{

    int a=0,b=0,c=0;
    cout<<"İkinci dereceden denklemin katsayılarını giriniz..:"<<endl;
    cin>>a>>b>>c;

    cout<<KokHesapla1(a,b,Delta(a,b,c))<<"   "<<KokHesapla1(a,b,Delta(a,b,c));
}

int Delta(int a,int b, int c)
{
    int firstArgument=0;
    int secondArgument=0;

    firstArgument=b*b;
    secondArgument=(4*a*c);
    return (firstArgument-secondArgument);
}

int KokHesapla1(int a,int b, int delta )
{
    int firstArgument=-b;
    int secondArgument=2*a;
    delta=pow(delta,1/2);

    return ( (firstArgument-delta)/secondArgument );
}
int KokHesapla2(int a,int b, int delta )
{
    int firstArgument=-b;
    int secondArgument=2*a;
    delta=pow(delta,1/2);

    return ( (firstArgument-delta)/secondArgument );
}