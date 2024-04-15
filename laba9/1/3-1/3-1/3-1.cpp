#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	double a = 1, b = 6, h, x, s = 0, n = 200;
	h = (b - a) / n;
	x = a;
	while (x <= (b - h))
	{
		s = s + h * (1 + pow(x, 3) + 1 + pow(x + h, 3)) / 2;
		x = x + h;
	}
	cout << s;
	_getch();
}