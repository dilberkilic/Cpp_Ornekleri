#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");
	int say , i=1;
	cout << "Ka�a kadar saymam� istersin :";
	cin >> say;
	while (i<=say)
	{
		cout << i <<" ";
		i++;
	}
	system("pause");
	return 0;
}