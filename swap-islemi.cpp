#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
	int dizi[6] = {23,12,45,36,28,2};   //6 elemanl� bir dizi olu�turuyoruz.
	int temp ;   //swap i�lemi i�in ge�ici de�i�ken tan�ml�yoruz.
	for (int i = 1; i < 6; i++)   //dizinin s�f�r�nc� eleman�ndan ba�la birer birer artt�rarak ilerle
{
for(int j = i; j > 0 && dizi[j] < dizi[j-1]; j--)// j de�erini i ye e�itle bu ad�mda  i de�erini artt�rd�k�a j de�erinin de artmas�n� sa�l�yoruz . ve ba�lac� kullan�yoruz .soruyoruz dizinin j-1'ninci eleman� b�y�k j'ninci eleman� m�d�r?(neden j-1 ��nk� her zaman solundaki eleman ile kar��la�t�r�yoruz.
{
	// e�er for d�ng�s�n�n i�i do�ru ise for �al���r ve swap i�lemi ba�arlar.
			temp = dizi[j];   //dizinin j eleman�n�n de�erini ge�ici de�i�kene e�itle
			dizi[j] = dizi[j-1];   //j-1 'inci de�eri j'ninci de�ere e�itle
			dizi[j-1] = temp;   //j-1'inci de�eri temp de�erine e�itle 
		}
	}
cout<<"Dizinin s�ralanm�� hali : " <<dizi[]; //dizinin son halini ekrana yazd�r.

