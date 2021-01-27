#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int boy, en;
	cout << "Dikdörtgenin boyunu giriniz: ";
	cin >> boy;
	cout << "Dikdörtgenin enini giriniz: ";
	cin >> en;
	 
	for (int i = 0; i < en; i++)
	{
		for (int j = 0; j < boy; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
	for (int b = boy; b > 0; b--)
	{
		for (int c = 0; c < b; c++)
		{
			cout << "*";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}