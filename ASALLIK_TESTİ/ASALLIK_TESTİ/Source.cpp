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
		cout << "Asal olup-olmad���n� kontrol edece�iniz say�y� giriniz:"<<endl;
		cin >> sayi;
		if (sayi > 2)
		{
			while (sayac < sayi - 1)
			{ 
				sayac++; 

				if (sayi % sayac == 0)
				{
					cout << "Say� asal de�ildir" << endl;
					break;
				}
				else if (sayac + 1 == sayi)
				{ 
					cout << "Say� asald�r.";
				}
			}
				

		}

		else if (sayi == 2)
		{
			cout << "Girilen sayi en k���k asal say�d�r.";
		}
		else
		{
			cout << "Asall�k pozitif say�larda aran�r...";
		}
		cout << "e-devam,h-��k��"<<endl;
		cin >> secim;
		sayac = 1;
	}
	system("pause");
	return 0;
}