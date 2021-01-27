#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int s1, s2, s3,max;
	cout << "bir sayi giriniz : "<<endl;
	cin >> max;
	s1 = 0;
	s2 = 1;
	s3 = 1;
	cout << s1;
	while (s1<=max)
	{
		cout << s3;
		s3 = s1 + s2;
		s1 = s2;
		s2 = s3;6

	}
	system("pause");
	return 0;
}