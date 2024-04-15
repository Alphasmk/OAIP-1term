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
		if ((exp(x) - 3 - 1 / x) * (exp(a) - 3 - 1 / a) <= 0)
			b = x;
		else
			a = x;
	}
	cout << x;
	_getch();
}