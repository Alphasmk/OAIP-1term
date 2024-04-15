#include <iostream>
#include <conio.h>
int main()
{
	float a = 2.4e4, b = 0.5, m = 8, z, y;
	float j[] = {1.7, 2.9, 8};
	for (int i = 0; i < 3; i++)
	{
		y = (m - b) / (sin(a) - exp(a));
		z = 3 * y + sqrt(a - 4 * j[i] * b);
		printf("y = %5.2f\n", y);
		printf("z = %5.2f\n", z);
	}
	_getch();
}