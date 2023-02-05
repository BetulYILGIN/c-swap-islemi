#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	int dizi[6] = {23,12,45,36,28,2};   //6 elemanlý bir dizi oluþturuyoruz.
	int temp ;   //swap iþlemi için geçici deðiþken tanýmlýyoruz.
	for (int i = 1; i < 6; i++)   //dizinin sýfýrýncý elemanýndan baþla birer birer arttýrarak ilerle
{
for(int j = i; j > 0 && dizi[j] < dizi[j-1]; j--)// j deðerini i ye eþitle bu adýmda  i deðerini arttýrdýkça j deðerinin de artmasýný saðlýyoruz . ve baðlacý kullanýyoruz .soruyoruz dizinin j-1'ninci elemaný büyük j'ninci elemaný mýdýr?(neden j-1 çünkü her zaman solundaki eleman ile karþýlaþtýrýyoruz.
{
	// eðer for döngüsünün içi doðru ise for çalýþýr ve swap iþlemi baþarlar.
			temp = dizi[j];   //dizinin j elemanýnýn deðerini geçici deðiþkene eþitle
			dizi[j] = dizi[j-1];   //j-1 'inci deðeri j'ninci deðere eþitle
			dizi[j-1] = temp;   //j-1'inci deðeri temp deðerine eþitle 
		}
	}
cout<<"Dizinin sýralanmýþ hali : " <<dizi[]; //dizinin son halini ekrana yazdýr.

