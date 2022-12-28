#include <iostream>
using namespace std;
int main()
{

    int* p = new int [5] ;
    int* q=p;
    
    for (size_t i = 0; i < 5; i++) 
    {
        p[i]=i;
    }
    for (size_t i = 0; i < 5; i++)
    {
        std::cout<<i<<"..:"<<p[i]<<std::endl;
    }
    
    delete [] p; // Delete operatörü heap'teki alanı siliyor. Stackteki pointer hayatta.
    p=new int [8];
    
    for (size_t i = 0; i < 5; i++)
    {
        std::cout<<i<<"..:"<<q[i]<<std::endl;
    }



}