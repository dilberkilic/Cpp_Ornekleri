#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int sayi = 0, sayac = 1;
	char secim = 'e';
	while (secim == 'e')
	{
		cout << "Asal olup-olmadýðýný kontrol edeceðiniz sayýyý giriniz:"<<endl;
		cin >> sayi;
		if (sayi > 2)
		{
			while (sayac < sayi - 1)
			{ 
				sayac++; 

				if (sayi % sayac == 0)
				{
					cout << "Sayý asal deðildir" << endl;
					break;
				}
				else if (sayac + 1 == sayi)
				{ 
					cout << "Sayý asaldýr.";
				}
			}
				

		}

		else if (sayi == 2)
		{
			cout << "Girilen sayi en küçük asal sayýdýr.";
		}
		else
		{
			cout << "Asallýk pozitif sayýlarda aranýr...";
		}
		cout << "e-devam,h-çýkýþ"<<endl;
		cin >> secim;
		sayac = 1;
	}
	system("pause");
	return 0;
}