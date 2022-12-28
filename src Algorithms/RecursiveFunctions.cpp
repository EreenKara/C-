#include <iostream>

using namespace std;


// Recursive fonksiyonlar da olması gereken ilk özellik bitiş değerinin belirlenmesi bunun için if blokları kullanılıyor.
// Bitiş değeri belirlendikten sonra fonskiyonun kendini çağırmasıyla bir nevi döngü oluşturuluyor.
// Tekrar değeri bilinmiyor ama nerde biteceği biliniyor. İçerisindeki kod bloğu yani işlemler düzgün seçilmeli
// Burdaki işlemler gelen parametrelere göre şekillenecek, sürekli artan ya da azalan bir sayımız yok bunun yerine parametreler
// artıp ya da azalıyor o yüzden geri parametre olarak verdiğimiz sayıları iyi seçmemiz gerekiyor bunlar bir nevi
// bizim sayaclarımız oluyorlar. i değerimiz yani.

// Recursive fonskiyon yapmak hafızayı döngülere göre daha çok dolduruyor ve yavaş çalışıyorlar
// Ama daha az kodla yazıldığı için ve daha kolay yazılabildiği için tercih edilebiliyor.
// Hız ihtiyacı olan noktalarda kullanmamamk gerekiyor. Performans olarak dongüler her zaman recursive'den önde. 

	
int Faktoriyel(int sayi)
{
    if(sayi<=1)
    	return sayi;
    
    return sayi*Faktoriyel(sayi-1);
}

void diziTersCevir(int dizi[], int uzunluk)
{
    if (uzunluk > 1)
    {
        int tmp = dizi[0];
        dizi[0] = dizi[uzunluk - 1];
        dizi[uzunluk - 1] = tmp;
        diziTersCevir(dizi + 1, uzunluk - 2);
    }
}

int main()
{
    int sayilar[] = {27, 46, 17, 90, 63};
	diziTersCevir(sayilar,5);
	int sayilar2[] = {10, 20, 30, 40, 50, 60, 70};
    diziTersCevir(sayilar, 7);
	for(int index=0;index<5;index++)
    {
		cout<<sayilar[index]<<" ";
	}
}
