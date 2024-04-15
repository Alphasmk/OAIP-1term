#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double e = 0.0001, a, b, x;
	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	while (abs(a - b) > 2 * e)
	{
		x = (a + b) / 2;
		if ((pow(x, 3) + 2 * x - 1) * (pow(a, 3) + 2 * a - 1) <= 0)
			b = x;
		else
			a = x;
	}
	cout << x;
	_getch();
}