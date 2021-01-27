#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int sayac1 = 0, sayac2 = 0,sayi;
	cin >> sayi;
	for (int i = 2; i <= sayi; i++)
	{
		sayac1 = 0;
		for (int j = 2; j < i; j++)
		{
			if (i%j == 0)
			{
				sayac1++;
				break;
			}
		}
		if (sayac1 == 0)
		{
			cout << i << " ";
			sayac2++;
		}
	}
	cout << endl;
	cout << "1-100 arası Toplam " << sayac2 << " adet asal sayı var.";

	system("pause");
	return 0;
}