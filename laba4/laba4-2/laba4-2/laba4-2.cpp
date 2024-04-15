#include <iostream>
using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double sqr;
	int d;
	cout << "Введите d = ";
	cin >> d;
	sqr = pow(d * sqrt(2) / 2, 2);
	cout << "Площадь квадрата = " << sqr;
}