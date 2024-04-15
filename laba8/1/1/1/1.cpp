#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double d = 12.5e-4, a, h, asum = 0;
	int i, n = 5;
	for (i = 1; i <= n; i++)
	{
		cout << "Введите a" << i << ": "; cin >> a;
		asum = asum + pow(a, 2);
	}
	h = d + asum;
	cout << "h = " << h << endl;
	_getch();
}