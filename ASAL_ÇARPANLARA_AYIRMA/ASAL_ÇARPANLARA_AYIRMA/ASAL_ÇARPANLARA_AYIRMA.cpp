#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int sayi, carpan = 2;
	cout << "Carpanlarina ayirmak istediginiz sayiyi giriniz : ";
	cin >> sayi;
	cout << "Sayinin asal carpanlari :";
	while (sayi>1)
	{

		while (sayi%carpan==0)
		{
			cout << carpan << " ";
			sayi /= carpan;
		}
		carpan++; 
	}

	system("pause");
	return 0;
}