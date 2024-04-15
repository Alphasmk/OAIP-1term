#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double c = 3.7, d = 51.9e-2, a = 4, k = 1, x, y;
	int i;
	x = tan(pow(a, 2) - 1) / (d + 1);
	while(c <= 5)
	{
		if (3 * x < a * c)
		{
			y = a * k + d;
		}
		else if(3 * x >= a * c)
		{ 
			y = cos(a * k) * exp(a + 1);
		}
		cout << "c = " << c << "y = " << y << endl;
		c = c + 0.1;
	}
	_getch();
}