#include <iostream>
#include <stdlib.h>
using namespace std;
float pi = 3.14;
float daire_alan(int r)
{
	return 2 * pi * r;
}
int kare_alan(int kenar)
{
	return pow(kenar, 2);
}
int diktorgen_alan(int en, int boy)
{
	return en * boy;
}
void alan_yazdir(float alan)
{
	cout << "seklin alani : " << alan << endl;
}
int main()
{
	int alan;
	char secim;
	cout << "Hangi seklin alanini hesaplamak istiyorsunuz ? (d:daire , dikdortgen:i , kare: k ):";
	cin>> secim;
	switch (secim)
	{
	case 'd':
		int y;
		cout << "yaricapi giriniz :";
		cin >> y;
		alan=daire_alan(y);
		alan_yazdir(alan);
		break;
	case 'i':
		int e, b;
		cout << "eni giriniz:";
		cin >> e;
		cout << "boyu giriniz";
		cin >> b;
		alan = diktorgen_alan(e, b);
		alan_yazdir(alan);
		break;
	case 'k':
		int k;
		cout << "karenin kenarini giriniz:";
		cin >> k;
		alan = kare_alan(k);
		alan_yazdir(alan);
		break;
	default:
		break;
	}

	system("pause");
	return 1;
}