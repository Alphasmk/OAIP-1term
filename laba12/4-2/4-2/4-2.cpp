#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int Z[100], n, i, k, count = 0, x;
	cout << "Введите n: "; cin >> n;
	for (i = 0; i < n; i++)
	{
		Z[i] = rand() % 99;
	}

	for (i = 0; i < n; i++)
	{
		cout << Z[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		if (i == 0 || *(Z + i) != *(Z + i - 1)) {
			count++;
		}
	}

	cout << count;

	_getch();
}