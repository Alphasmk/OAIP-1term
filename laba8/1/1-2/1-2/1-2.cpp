#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double x, y, z, xsum;
	int i;
	cout << "Введите x1: "; cin >> x;
	z = x;
	xsum = pow(x, 2);
	for (i = 2; i <= 5; i++)
	{
		cout << "Введите x" << i << ": "; cin >> x;
		if (x > z)
		{
			z = x;
		}
		xsum = xsum + pow(x, 2);
	}
	y = z * xsum;
	cout << "y = " << y << endl;
	cout << "z = " << z;
	_getch();
}