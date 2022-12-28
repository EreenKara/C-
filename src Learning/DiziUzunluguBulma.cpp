#include <iostream>
#include <time.h>
#include <iterator>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
    srand(time(0));
    int uzunluk=0;
    int *dizi=new int[5];
    
    

    vector<int> xx;
    xx.size();

    uzunluk=size(dizi2)/sizeof(int); // dizi2.GetSize()
    
    cout<<"uzunluk: "<<uzunluk<<endl;
    uzunluk=sizeof(dizi2);
    cout<<"uzunluk2: "<<uzunluk<<endl;

    // dizinin uzunluğunu bulmaya çalışıyorum ki for döngüsü için kullanabileyim.

    for (size_t i = 0; i < 5; i++)
    {
        dizi[i]= rand() %10;
    }
    
}