#include <iostream>
#include <math.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(0));
    
    int dizi[10];

    for (size_t i = 0; i < 10; i++)
    {
        dizi[i] = rand() %2001;
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = i; j < 10; j++)
        {
            if(dizi[i]>dizi[j]) // if (20 > 10)  
            {
                int temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
        }
    }

    for (size_t i = 0; i < 10; i++)
    {
        cout<<"Dizi "<<i+1<<". eleman ...:"<<dizi[i]<<endl;
    }
    

    
    
}

