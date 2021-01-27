#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int en_buyuk=0, kac, sayi;
	cout << "kac sayi giriceksiniz: ";
	cin >> kac;
	cout << "sayilari giriniz :";
	for (int i = 0 ; i < kac ; i++)
	{
		cin >> sayi;
		if (sayi > en_buyuk)
	   en_buyuk=sayi;
	}
	cout << "en buyuk sayi:" << en_buyuk;

	system("pause");
	return 0;
}