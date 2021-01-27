#include <iostream>
#include <stdlib.h>
#include<locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int say1, say2, sonuc;

	char islem;

	cout << "Yapmak istediðiniz iþlemi giriniz:"<<endl;

	cin >> say1 >> islem >> say2;

	if (islem == '+')
	{
		sonuc = say1 + say2;
		cout << say1 << " + " << say2 << " = " << sonuc;
	}
	else if (islem == '-')
	{
		sonuc = say1 - say2;
		cout << say1 << " - " << say2 << " = " << sonuc;
	}
	else if (islem == '*')
	{
		sonuc = say1 * say2;
		cout << say1 << " * " << say2 << " = " << sonuc;
	}
	else if (islem == '/')
	{
		if (say2 == 0)
		{ 
			cout << "Bölüm sýfýr olmaz.";
		return 0;
		}
		else 
		sonuc = say1 / say2;
		cout << say1 << " / " << say2 << " = " << sonuc;
	}
	else if (islem == '%')
	{
		sonuc = say1 % say2;
		cout << say1 << " % " << say2 << " = " << sonuc;
	}

	system("pause");
	return 0;
}