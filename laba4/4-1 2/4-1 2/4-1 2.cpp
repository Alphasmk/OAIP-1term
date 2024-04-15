#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	double t, a, b;
	cout << "Введите число "; cin >> t;
	a = (t - 5) / 2;
	b = a + 5;
	cout << "Первое число: " << a << endl;
	cout << "Второе число: " << b;
}