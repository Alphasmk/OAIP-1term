#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Russian");
	int A[15], B[15], k, i, countmore = 0, counteq = 0, countlow = 0;
	for (i = 0; i < 15; i++)
	{
		A[i] = rand() % 99;
		B[i] = rand() % 99;
	}

	for (i = 0; i < 15; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	for (i = 0; i < 15; i++)
	{
		cout << B[i] << " ";
	}

	for (i = 0; i < 15; i++)
	{
		if (*(A + i) == *(B + i))
		{
			counteq++;
		}

		if (*(A + i) > *(B + i))
		{
			countlow++;
		}

		if (*(A + i) < *(B + i))
		{
			countmore++;
		}
	}

	cout << endl << "=: " << counteq << endl << ">: " << countmore << endl << "<: " << countlow;
	_getch();
}
