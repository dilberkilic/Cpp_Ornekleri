#include "pch.h"
#include <iostream>
#include <stdlib.h>
using namespace std;
void kb (char *c)
{
	*c -= 32;
}
void bk(char *c)
{
	*c += 32;
}
void donusum()
{
	char c;
	cout << "donusturmek istediginiz harfi giriniz : ";
	cin >> c;
	if (c == '0')
		return;
	if (c >= 'A'&& c <= 'Z')
	{
		bk(&c);
	}
	else 
	{
		kb(&c);
	}
	cout << "Sonuc :"<<c;
}
int main()
{
	donusum();
	system("pause");
	return 0;
}