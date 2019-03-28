#include <iostream>
#include <stdlib.h>
using namespace std;
int funcCbyVal(int x) // FONKSİYONU REFERANS İLE ÇAĞIRMA.
{
	x += 10;
	return x;
} 
void funcCbyPtr(int*x)
{
	*x += 10;
}
void funcCbyRef(int &x) // & bu kullanım cpp ile gelen bir özelliktir.
{
	x += 10;
	x++;
	return;
}

int main()
{
	int b = 50,c;
	c = funcCbyVal(b); //  b değişkenini funcCbyVal fonksiyonumuza atadık ordaki değeri ise c ye atadık . burda 50 olan değer 10 arttırıldı ve c ye 60 olarak atandı.
	funcCbyPtr(&c); // c değerini ptr fonksiyonumuza atadık. 60 olan c değeri ptr fonksiyonuyla 10 arttırıldı ve 70  oldu .
	funcCbyPtr(&b); // b değerini atadık bu seferde. 50 olan b değeri 10 arttırdı ve 60 yaptı. 
	funcCbyRef(c); // refede c yi atadık . 70  olan c değişkenimiz ref fonksiyonuyla 10 arttırıp 1 eklendi ve 81 oldu.
	cout << b << " " << c << std::endl; // çıktımızda 60 81 olarak çıkıcak .


	system("pause");
	return 0;
}
