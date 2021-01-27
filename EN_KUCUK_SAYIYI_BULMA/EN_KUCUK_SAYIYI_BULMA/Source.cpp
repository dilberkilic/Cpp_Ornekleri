#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int en = 100, kac, sayi;
	cout << "kac sayi giriceksiniz: ";
	cin >> kac;
	cout << "sayilari giriniz :";
	for (int i = 0; i < kac; i++)
	{
		cin >> sayi;
		if (sayi > en)
			en= sayi;
	}
	cout << "en KUCUK sayi:" << en;


	system("pause");
	return 0;
}