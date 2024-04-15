#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

int main()
{
	char tmp[] = "HOW DO YOU DO", pb;
	int i, k, p, s, m = 0, count = 0;
	for (i = 1; i <= 4; i++)
	{
		for (k = 0; k < strlen(tmp); k++)
		{
			if (tmp[k] == ' ')
			{
				s = k;
				count++;
				if (count == 1 || count == 3)
				{
					for (p = s; p > m; p--)
					{
						*(tmp + p - 1) = *(tmp + p);
					}
				}
				m = k + 1;
			}
		}
	}

	for (i = 0; i < strlen(tmp); i++)
	{
		if (tmp[i] == 'D')
		{
			pb = tmp[i];
			tmp[i] = tmp[i + 1];
			tmp[i + 1] = pb;
			i++;
		}
	}

	for (i = 0; i < strlen(tmp); i++)
	{
		cout << tmp[i];
	}
	_getch();
}