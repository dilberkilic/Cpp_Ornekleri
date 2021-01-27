#include <iostream>
#include <stdlib.h>
#include<locale.h> 
#include <string>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int hiz;
	char tur;

	cout << "Lütfen aracýn türünü giriniz.(otobüs=o kamyon=k otomobil=l):" << endl;
	cin >> tur;
	cout << "Lütfen aracýn hýzýný giriniz:" << endl;
	cin >> hiz;
	if (tur == 'o')
	{
		cout << "Aracýnýz otobüsdür\n" << endl;
		if (hiz > 70)

			cout << "Araç cezalýdýr.";
		else
			cout << "Kurallara uygundur.";
	}
	else if(tur == 'k')
	{ 
		cout << "Aracýnýz kamyonettir.\n" << endl;
	if (hiz > 50)

		cout << "Araç cezalýdýr.";
	else
		cout << "Kurallara uygundur.";
	}
	else
	{ 
		cout << "Aracýnýz otomobildir.\n" << endl;
	if (hiz > 82)

		cout << "Araç cezalýdýr.";
	else
		cout << "Kurallara uygundur."; 
	}
	system("pause"); 
	return 0;
}