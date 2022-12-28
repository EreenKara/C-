// 65 satir felan sürdü. Eren kara b211210031

#include <iostream>
#include <time.h>
#include<math.h>
using namespace std;

int main()
{
    srand(time(0));
    double sonuc = 1;
    int boyut = 0;
    bool pivotDurum;
    cout << "m Degeri:";
    cin >> boyut;
   
    int** sayilar = new int* [boyut];
    for (size_t i = 0; i < boyut; i++)
    {
        sayilar[i] = new int[boyut];
        for (size_t j = 0; j < boyut; j++)
        {
            
            sayilar[i][j] = rand() % 2 + 1;
        }
    }
    for (size_t i = 0; i < boyut; i++)
    {
        for (size_t j = 0; j < boyut; j++)
        {
            cout << sayilar[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl ;

    // 2x2'ye indiren matris
    for (size_t k = 0; k < boyut - 2; k++)  // m-2 olmasının sebebi 2x2 matirsi olduğunda determinant hesaplayabilmemiz.
    {
        pivotDurum = false;
        int yeniBoyut = boyut - k - 1;
        
        int** temp = new int* [yeniBoyut];
        for (size_t i = 0; i < yeniBoyut; i++)
        {
            temp[i] = new int[yeniBoyut];
        }
        // cout << "sonuc ust: " << sonuc << endl << endl;
        for (int sayac=0;sayilar[0][0] == 0 ;sayac++)
        {
            if (sayac > yeniBoyut)
            {
                pivotDurum = true;
                break;
            }
            int* temp2 = new int[yeniBoyut + 1];
            for (int i = 0; i <yeniBoyut+1; i++)
            {
                temp2[i] = sayilar[0][i];
                sayilar[0][i] = sayilar[sayac][i];
                sayilar[sayac][i] = temp2[i];
            }
            sonuc *= -1;
            /*cout << "sonuc orta : " << sonuc << endl << endl;*/
            delete[] temp2;
        }
        if (pivotDurum)
        {
            break;
        }
       
        cout << "girmeden once" << endl;
        for (size_t i = 0; i < yeniBoyut + 1; i++)
        {
            for (size_t j = 0; j < yeniBoyut + 1; j++)
            {
                
                cout << sayilar[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl ;
        
        sonuc *= pow(sayilar[0][0], -(yeniBoyut - 1));
        /*cout << "sonuc alt : " << sonuc << endl << endl;*/
        for (size_t i = 0; i < yeniBoyut; i++)
        {
            for (size_t j = 0; j < yeniBoyut; j++)
            {
                temp[i][j] = sayilar[0][0] * sayilar[i + 1][j + 1] - sayilar[0][j + 1] * sayilar[i+1][0];
            }
        }
        for (size_t i = 0; i < boyut - k; i++)
        {
            delete[] sayilar[i];
        }
        delete[] sayilar;

        sayilar = temp;
        cout << "girdikten sonra" << endl;
        for (size_t i = 0; i < yeniBoyut; i++)
        {
            for (size_t j = 0; j < yeniBoyut; j++)
            {
                cout << sayilar[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    if (pivotDurum)
    {
        cout << "Sonuc bulunamadi. Butun pivotlar 0.";
    }
    else
    {
        /*cout << "Sonuçççç : " << sonuc << endl << endl;*/
        sonuc *= sayilar[0][0] * sayilar[1][1] - sayilar[0][1] * sayilar[1][0];
        cout << "Sonuccc : " << sonuc;
    }
    return 0;
}