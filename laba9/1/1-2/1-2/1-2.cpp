#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double a = 1, b = 3, n = 200, h, s1 = 0, s2 = 0, S, x;
	int i = 1;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n)
	{
		s2 = s2 + (pow(x, 3) - 3);
		x = x + h;
		s1 = s1 + (pow(x, 3) - 3);
		x = x + h;
		i++;
	}
	S = (h / 3) * ((pow(a, 3) - 3) + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 + (pow(b, 3) - 3));
	cout << S;
	_getch();
}