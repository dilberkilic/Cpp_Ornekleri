#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void aralarinda_asal_mi(int s1, int s2, bool *sonuc)
{
	int kucuk = s1;
	if (s2 < kucuk)
		kucuk = s2;
	*sonuc = 1;
	for (int i = 2; i < kucuk; i++)
	{
		if (s1 % i == 0 && s2 % i == 0)
		{
			*sonuc = 0;
			return;
		}
	}
}
int main()
{
	int a, b;
	bool cevap;
	cout << "lutfen iki asal sayi giriniz: ";
	cin >> a >> b;
	aralarinda_asal_mi(a, b, &cevap);
	cout << (cevap ? "Aralarinda asal" : "Aralarinda asal degil")<<endl ;
	system("pause");
	return 0;
}