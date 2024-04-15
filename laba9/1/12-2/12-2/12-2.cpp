#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double a = 5, b = 11, n = 200, h, s1 = 0, s2 = 0, S, x;
	int i = 1;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n)
	{
		s2 = s2 + exp(x) + 6;
		x = x + h;
		s1 = s1 + exp(x) + 6;
		x = x + h;
		i++;
	}
	S = (h / 3) * ((exp(a) + 6) + 4 * (exp(a + h) + 6) + 4 * s1 + 2 * s2 + (exp(b) + 6));
	cout << S;
	_getch();
}