#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	double a = 5, b = 11, h, x, s = 0, n = 200;
	h = (b - a) / n;
	x = a;
	while (x <= (b - h))
	{
		s = s + h * ((exp(x) + 6) + (exp(x + h) + 6)) / 2;
		x = x + h;
	}
	cout << s;
	_getch();
}