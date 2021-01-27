#include <iostream>
#include <stdlib.h>
#include<locale.h> 
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Turkish");

	int tahmin;
	char cevap = 'e';
	srand(time(NULL));
	while (cevap == 'e')
	{
		int rsg_say = rand() % 100;
		cout << "0 ile 100 arasýnda bir sayý tuttum"<<endl;
		cout << "Hadi tahmin et ." << endl;
		cin >> tahmin;
		while (tahmin != rsg_say)
		{
			if (tahmin < rsg_say)
			{
				cout << "Tuttuðum sayýdan küçük." << endl;
			}
			else
			{
				cout << "Tuttuðum sayýdan büyük" << endl;
			}
			cout << "Tekrar tahmin et." << endl;
			cin >> tahmin;
		}
		cout << "Tebrikler buldun. Tuttuðum sayý :" << rsg_say << "idi" << endl;
		cout << "Yeniden oynam istermisin ?" << endl;
		cout << "Evet: e ,Hayýr: h " << endl;
		cin >> cevap;
	}
	cout << "Güle Güle..";
	system("pause");
	return 0;
}