#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int C[15], B[15], k, i, countmore = 0, counteq = 0, countlow = 0;
	for (i = 0; i < 15; i++)
	{
		C[i] = rand() % 99;
		B[i] = rand() % 99;
	}

	for (i = 0; i < 15; i++)
	{
		cout << C[i] << " ";
	}

	cout << endl;

	for (i = 0; i < 15; i++)
	{
		cout << B[i] << " ";
	}

	for (i = 0; i < 15; i++)
	{
		if (*(C + i) == *(B + i))
		{
			counteq++;
		}

		if (*(C + i) > *(B + i))
		{
			countlow++;
		}

		if (*(C + i) < *(B + i))
		{
			countmore++;
		}
	}

	cout << endl << "=: " << counteq << endl << ">: " << countmore << endl << "<: " << countlow;
	_getch();
}