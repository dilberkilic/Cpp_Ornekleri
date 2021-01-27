#include <iostream>
#include <stdlib.h>
#include<locale.h> 
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	double sayi, sayi2, toplam;
	cout << "toplanacak iki sayýyý giriniz:" << endl;
	cin >> sayi >> sayi2;
	toplam = sayi + sayi2;
	cout << fixed << setprecision(2) << toplam << endl;
    system("pause");
	return 0;
}