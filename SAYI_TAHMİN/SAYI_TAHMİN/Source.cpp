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
		cout << "0 ile 100 aras�nda bir say� tuttum"<<endl;
		cout << "Hadi tahmin et ." << endl;
		cin >> tahmin;
		while (tahmin != rsg_say)
		{
			if (tahmin < rsg_say)
			{
				cout << "Tuttu�um say�dan k���k." << endl;
			}
			else
			{
				cout << "Tuttu�um say�dan b�y�k" << endl;
			}
			cout << "Tekrar tahmin et." << endl;
			cin >> tahmin;
		}
		cout << "Tebrikler buldun. Tuttu�um say� :" << rsg_say << "idi" << endl;
		cout << "Yeniden oynam istermisin ?" << endl;
		cout << "Evet: e ,Hay�r: h " << endl;
		cin >> cevap;
	}
	cout << "G�le G�le..";
	system("pause");
	return 0;
}