#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
float ort(int n)
{
	int sayi;
	int toplam = 0;
	cout << "sayilari giriniz: ";
	for (int i = 0; i < n; i++)
	{
		cin >> sayi;
		toplam += sayi;
	}
	return toplam / n;
}

int main()
{
	int kac;
	cout << "kac adet not giriceksiniz : ";
	cin >> kac;
	cout << "sayilarin ortalamasi: " << ort(kac)<<endl;
	system("pause");
	return 0;
}