#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double x, y, z, t, xsum;
	int i;
	cout << "Введите x1: "; cin >> x;
	z = x;
	xsum = pow(x, 3);
	for (i = 2; i <= 5; i++)
	{
		cout << "Введите x" << i << ": "; cin >> x;
		if (x > z)
		{
			z = x;
		}
		xsum = xsum + pow(x, 3);
	}
	cout << "Введите t: "; cin >> t;
	y = t * xsum;
	cout << "y = " << y << endl;
	cout << "z = " << z;
	_getch();
}