#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double c = -0.045, b, g, gmul = 1;
	int j, m = 4;
	for (j = 1; j <= m; j++)
	{
		cout << "Введите b" << j << ": "; cin >> b;
		gmul = gmul * pow(b + 1, 2);
	}
	g = c * gmul;
	cout << "g = " << g;
	_getch();
}