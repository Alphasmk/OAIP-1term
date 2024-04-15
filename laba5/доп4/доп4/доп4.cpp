#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double r, q, p, d;
	cout << "Введите радиус: "; cin >> r;
	cout << "Введите длину первой диагонали: "; cin >> q;
	cout << "Введите длину второй диагонали: "; cin >> p;
	d = q * p / (2 * sqrt(pow(q, 2) + pow(p, 2)));
	if (r <= d)
		cout << "Пройдет";
	else
		cout << "Не пройдет";
}