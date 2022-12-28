#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    srand(time(0));

    // matris olusturma satirlari
    int satir=0,sutun=0;
    cout<<"Lutfen Bir Matris Boyutu Giriniz:"<<endl;
    cin>>satir>>sutun;
    int** MainMatris=new int*[sutun];
    int** AltUcgenselMatris=new int*[sutun];
    int** UstUcgenselMatris=new int*[sutun];
    int** SonucMatrisi=new int*[sutun];

    for(int i=0;i<sutun;i++)
    {
        MainMatris[i]=new int[satir];
        AltUcgenselMatris[i]=new int[satir];
        UstUcgenselMatris[i]=new int[satir];
        SonucMatrisi[i]=new int[satir];
        for(int j=0;j<satir;j++)
        {
            MainMatris[i][j]=rand()%9+1;
            cout<< MainMatris[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    // matrisi diagonal olarak bolme islemleri
    for (size_t i = 0; i < satir; i++)
    {
        for (size_t j = 0; j < sutun; j++)
        {
            if( i>j  )
            {
                AltUcgenselMatris[i][j]=MainMatris[i][j];
                UstUcgenselMatris[i][j]=0;
            }
            else
            {
                UstUcgenselMatris[i][j]=MainMatris[i][j];
                AltUcgenselMatris[i][j]=0;
            }
            cout<<AltUcgenselMatris[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<endl<<endl;

    // Diagonal olarak bolunen matrislerin toplamının sonucunun ne olacagını gormek
    for (size_t i = 0; i < sutun; i++)
    {
        for (size_t j = 0; j < satir; j++)
        {
            if(UstUcgenselMatris[i][j]!=0)
            {
                SonucMatrisi[i][j]=UstUcgenselMatris[i][j];
            }
            else
            {
                SonucMatrisi[i][j]=AltUcgenselMatris[i][j];
            }
            cout<<SonucMatrisi[i][j]<<" ";
        }
        cout<<endl;
    }
}