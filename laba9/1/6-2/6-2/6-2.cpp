#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double a = 1, b = 5, n = 200, h, s1 = 0, s2 = 0, S, x;
	int i = 1;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n)
	{
		s2 = s2 + 1 + pow(x, 3);
		x = x + h;
		s1 = s1 + 1 + pow(x, 3);
		x = x + h;
		i++;
	}
	S = (h / 3) * ((1 + pow(a, 3)) + 4 * (1 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + (1 + pow(b, 3)));
	cout << S;
	_getch();
}