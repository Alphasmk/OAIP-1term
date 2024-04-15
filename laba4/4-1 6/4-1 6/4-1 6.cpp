#include <iostream>
using namespace std;
void main()
{	
	setlocale(LC_CTYPE, "Russian");
	int x, y, z;
	double a, g, t;
	cout << "Введите X "; cin >> x;
	cout << "Введите Y "; cin >> y;
	cout << "Введите Z "; cin >> z;
	x = abs(x);
	y = abs(y);
	z = abs(z);
	t = x * y * z;
	a = (x + y + z) / 3;
	g = pow(t, 1/3);
	cout << "Среднее геометрическое: " << g << endl;
	cout << "Среднее арифметическое: " << a;
}