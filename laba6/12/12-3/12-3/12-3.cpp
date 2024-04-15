#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	float a = 2.4e4, b = 0.5, m[] = {0.4, -1, 1.9}, y, z, j;
	int i;
	for (j = 2; j <= 3; j = j + 0.5)
	{
		for (i = 0; i < 3; i++)
		{
			y = (m[i] - b) / (sin(a) - exp(a));
			z = 3 * y + sqrt(a - 4 * j * b);
			cout << "y = " << y << endl;
			cout << "z = " << z << endl;
		}
	}
	_getch();
}