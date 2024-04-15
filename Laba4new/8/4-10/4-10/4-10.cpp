#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double s, p, a, b, c;
	cout << "Введите длину первой стороны: "; cin >> a;
	cout << "Введите длину второй стороны: "; cin >> b;
	cout << "Введите длину третьей стороны: "; cin >> c;
	p = (a + b + c) / 2;
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "Площадь треугольника: " << s;
}