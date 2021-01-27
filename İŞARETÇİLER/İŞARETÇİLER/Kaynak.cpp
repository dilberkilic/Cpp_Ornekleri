#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
void hesapla(int r, float *cevre, float *alan)
{
	*alan = 2 * 3.14*r;
	*cevre = 3.14*r*r;
	
}
int main()
{
	int d;
	float cevre,alan;
	cout << "Direnin yaricapini giriniz : ";
	cin >> d;
	hesapla(d, &cevre, &alan);
	cout << "Dairenin alani :" << alan << endl;
	cout << "Dairenin cevresi :" << cevre << endl;
	system("pause");
	return 0;
}
