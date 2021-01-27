#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{

	setlocale(LC_ALL, "Turkish");
	int kenar;
	cout << "kenar giriniz: ";
	cin >> kenar;
	for (int i = 0; i < kenar ; i++)
	{
		for ( int k = kenar-1 ; k >i; --k)
		{
			cout << " ";
		}
		for (int j = 0; j <= kenar ; j++)
		{
			cout << "*" ;
		}
		cout << endl;
	}

	system("pause");
	return 0;
}