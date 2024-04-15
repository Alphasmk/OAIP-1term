#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	float b = 0.5, m = 8, a = 2.4e4, j = 2, y, z;
	while (j <= 3)
	{
		y = (m - b) / (sin(a) - exp(a));
		z = 3 * y + sqrt(a - 4 * j * b);
		cout << "y = " << y << endl;
		cout << "z = " << z << endl;
		cout << "j = " << j << endl;
		j = j + 0.5;
	}
	_getch();
}