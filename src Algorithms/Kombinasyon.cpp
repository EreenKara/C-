#include <iostream>
using namespace std;
int main()
{
	int satir;
    int sutun;
	cout<<"Satir Giriniz:";
	cin>>satir>>sutun;

	double sonuc=0;
	int pay=1;
	int payda=1;

	
    for (int j = 0; j < sutun; j++)
    {
        pay*=(satir-j);
    }
    

    for (int k = sutun; k > 0; --k)
    {
        payda*=k;
    }
    
    sonuc=(double)pay/payda;
    cout<<sonuc;
}