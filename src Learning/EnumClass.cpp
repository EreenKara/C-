#include<iostream>
using namespace std;

enum class Yon
{
    Sol,
    Yukari,
    Sag,
    Asagi
};

int main(int argc,char* argv[])
{
    cout<<(int)Yon::Sag; // direkt olarak cevirmiyor artık benim belirtmem gerek. 
    // Ayrıca bir isim uzayı gibi Yon:: şeklinde tanımlamam gerekli 
    Yon yon = (Yon)0; // üstü kapalı cevirmiyor (Yon) yazmam gerekli.
}