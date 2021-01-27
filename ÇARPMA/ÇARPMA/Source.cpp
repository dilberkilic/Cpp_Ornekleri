#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int say1, say2,sonuc=1;
	cout << "çarpmak istediðiniz iki sayýyý giriniz.." << endl,
		cin >> say1 >> say2;
	sonuc = say1 * say2;
	cout << "Girilen iki sayýnýn çarpýmý :" << sonuc<<"\n";


	system("pause");
	return 0;
}