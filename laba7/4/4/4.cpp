#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int a, b, i, sum = 30;
	for (i = 6; i <= sum / 2; i++)
	{
		a = i;
		b = sum / 2 - i;
		if ((a * 1000 + a * 100 + b * 10 + b) % 2 == 0 && (a * 1000 + a * 100 + b * 10 + b) % 7 == 0 && (a * 1000 + a * 100 + b * 10 + b) % 11 == 0)
		{
			cout << a << a << b << b << endl;
			break;
		}
		else if ((a * 1000 + b * 100 + a * 10 + b) % 2 == 0 && (a * 1000 + b * 100 + a * 10 + b) % 7 == 0 && (a * 1000 + b * 100 + a * 10 + b) % 11 == 0)
		{
			cout << a << b << a << b << endl;
			break;
		}
		else if ((a * 1000 + b * 100 + b * 10 + a) % 2 == 0 && (a * 1000 + b * 100 + b * 10 + a) % 7 == 0 && (a * 1000 + b * 100 + b * 10 + a) % 11 == 0)
		{
			cout << a << b << b << a << endl;
			break;
		}
		else if ((b * 1000 + b * 100 + a * 10 + a) % 2 == 0 && (b * 1000 + b * 100 + a * 10 + a) % 7 == 0 && (b * 1000 + b * 100 + a * 10 + a) % 11 == 0)
		{
			cout << b << b << a << a << endl;
			break;
		}
		else if ((b * 1000 + a * 100 + b * 10 + a) % 2 == 0 && (b * 1000 + a * 100 + b * 10 + a) % 7 == 0 && (b * 1000 + a * 100 + b * 10 + a) % 11 == 0)
		{
			cout << b << a << b << a << endl;
			break;
		}
		else if ((b * 1000 + a * 100 + a * 10 + b) % 2 == 0 && (b * 1000 + a * 100 + a * 10 + b) % 7 == 0 && (b * 1000 + a * 100 + a * 10 + b) % 11 == 0)
		{
			cout << b << a << a << b << endl;
			break;
		}
		else if ((a * 1000 + a * 100 + a * 10 + b) % 2 == 0 && (a * 1000 + a * 100 + a * 10 + b) % 7 == 0 && (a * 1000 + a * 100 + a * 10 + b) % 11 == 0)
		{
			cout << a << a << a << b << endl;
			break;
		}
		else if ((a * 1000 + a * 100 + b * 10 + a) % 2 == 0 && (a * 1000 + a * 100 + b * 10 + a) % 7 == 0 && (a * 1000 + a * 100 + b * 10 + a) % 11 == 0)
		{
			cout << a << a << b << a << endl;
			break;
		}
		else if ((a * 1000 + b * 100 + a * 10 + a) % 2 == 0 && (a * 1000 + b * 100 + a * 10 + a) % 7 == 0 && (a * 1000 + b * 100 + a * 10 + a) % 11 == 0)
		{
			cout << a << b << a << a << endl;
			break;
		}
		else if ((b * 1000 + a * 100 + a * 10 + a) % 2 == 0 && (b * 1000 + a * 100 + a * 10 + a) % 7 == 0 && (b * 1000 + a * 100 + a * 10 + a) % 11 == 0)
		{
			cout << b << a << a << a << endl;
			break;
		}
		else if ((b * 1000 + a * 100 + b * 10 + b) % 2 == 0 && (b * 1000 + a * 100 + b * 10 + b) % 7 == 0 && (b * 1000 + a * 100 + b * 10 + b) % 11 == 0)
		{
			cout << b << a << b << b << endl;
			break;
		}
		else if ((a * 1000 + b * 100 + b * 10 + b) % 2 == 0 && (a * 1000 + b * 100 + b * 10 + b) % 7 == 0 && (a * 1000 + b * 100 + b * 10 + b) % 11 == 0)
		{
			cout << a << b << b << b << endl;
			break;
		}
		else if ((b * 1000 + a * 100 + b * 10 + b) % 2 == 0 && (b * 1000 + a * 100 + b * 10 + b) % 7 == 0 && (b * 1000 + a * 100 + b * 10 + b) % 11 == 0)
		{
			cout << b << a << b << b << endl;
			break;
		}
	}
	_getch();
}