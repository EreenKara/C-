#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

class Ekle
{
private:
public:
    int* Add(int eklenecek,int* dizi)
    {
        int* temp=new int[6];
        
        for(int i=0;i<5;++i)
        {
            temp[i]=dizi[i];
        }
        temp[5]=eklenecek;
        
        return temp;
    }
    void Add2(int eklenecek,int*& dizi)  // referans ile pointer arasında mantıksal oalrak bir fark yok sadece syntax değişiyor.
    {
        int diziUzunluk=sizeof(dizi)/sizeof(*dizi);
        cout<<"uzunluk: "<< diziUzunluk<<endl;

        int* temp=new int[diziUzunluk];
        for (size_t i = 0; i < 5; i++)
        {
            temp[i]= dizi[i];
        }
        temp[5]=eklenecek;
        dizi = temp;

    }
    void Add3(int eklenecek,int** dizi)
    {
        int diziUzunluk=sizeof(dizi)/sizeof(*dizi);

        int* temp=new int[diziUzunluk];
        for (size_t i = 0; i < 5; i++)
        {
            temp[i]= (*dizi)[i]; // parantez (*dizi) yaptık çünkü aksi halde dizi[] ' yi ilk okuyor ondan sonra * okuyor.
        }
        temp[5]=eklenecek;
        *dizi = temp;
    }
    int* Add4(int eklenecek,int* dizi)
    {
        int* temp =new int[6];
        memccpy(temp,dizi,eklenecek,6*sizeof(int)); // şuan çalışmıyor ama kopyalama işlemi yapan bir fonksiyon bu.
        return temp;
    }
};

int main()
{
    int *dizi=new int[5];
    
    for(int i=0;i<5;++i)
    {
        dizi[i]=i+1;
    }



    Ekle ekle=Ekle();
    
    // dizi=ekle.Add(13,dizi);
    // ekle.Add2(23,dizi);
    // ekle.Add3(32,&dizi);
    ekle.Add4(23, dizi);

    for(int i=0;i<6;++i)
    {
        cout<<i<<"..:"<<dizi[i]<<endl;
        
    }
    
}