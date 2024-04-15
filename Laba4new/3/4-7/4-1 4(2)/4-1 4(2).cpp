#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b;
	cout << "Введите a: "; cin >> a;
	cout << "Введите b: "; cin >> b;
	a = a + b;
	b = b - a;
	b = -b;
	a = a - b;
	cout << "a = " << a << endl;
	cout << "b = " << b;
}

//3