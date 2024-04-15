#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int a, b, t;
	cout << "Введите a "; cin >> a;
	cout << "Введите b "; cin >> b;
	t = a;
	a = b;
	b = t;
	cout << "a = " << a << endl;
	cout << "b = " << b;
}
//3