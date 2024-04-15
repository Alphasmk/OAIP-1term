#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int x, y, z, t;
	cout << "Введите число x: "; cin >> x;
	cout << "Введите число y: "; cin >> y;
	cout << "Введите число z: "; cin >> z;
	if (y <= z)
	{
		t = z;
		z = y;
		y = t;
	}
	if (x <= y)
	{
		t = y;
		y = x;
		x = t;
	}
	if (y <= z)
	{
		t = z;
		z = y;
		y = t;
	}
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z;
}