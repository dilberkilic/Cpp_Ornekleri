#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int say1, say2,sonuc=1;
	cout << "�arpmak istedi�iniz iki say�y� giriniz.." << endl,
		cin >> say1 >> say2;
	sonuc = say1 * say2;
	cout << "Girilen iki say�n�n �arp�m� :" << sonuc<<"\n";


	system("pause");
	return 0;
}