#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;

void BuyukHarf(char* girilen);

int main()
{
    char isim[]="Eren";
    BuyukHarf(isim);
    cout<<isim;
}

void BuyukHarf(char* girilen)
{
    for (size_t i = 0; i < strlen(girilen); i++)
    {
        if(islower(girilen[i]))
        {
            girilen[i]=girilen[i]-32;
        }
    }
} 