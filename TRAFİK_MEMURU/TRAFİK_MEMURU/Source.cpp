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

	cout << "L�tfen arac�n t�r�n� giriniz.(otob�s=o kamyon=k otomobil=l):" << endl;
	cin >> tur;
	cout << "L�tfen arac�n h�z�n� giriniz:" << endl;
	cin >> hiz;
	if (tur == 'o')
	{
		cout << "Arac�n�z otob�sd�r\n" << endl;
		if (hiz > 70)

			cout << "Ara� cezal�d�r.";
		else
			cout << "Kurallara uygundur.";
	}
	else if(tur == 'k')
	{ 
		cout << "Arac�n�z kamyonettir.\n" << endl;
	if (hiz > 50)

		cout << "Ara� cezal�d�r.";
	else
		cout << "Kurallara uygundur.";
	}
	else
	{ 
		cout << "Arac�n�z otomobildir.\n" << endl;
	if (hiz > 82)

		cout << "Ara� cezal�d�r.";
	else
		cout << "Kurallara uygundur."; 
	}
	system("pause"); 
	return 0;
}