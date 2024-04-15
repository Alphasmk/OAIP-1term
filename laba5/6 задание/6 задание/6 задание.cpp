#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, b, c;
	puts("Вы ходите к стоматологу? (1 - да, 2 - нет)"); cin >> a;
	switch (a)
	{
	case 1: puts("Вы молодец!"); break;
	case 2: puts("Это необходимая процедура, начните ходить!"); break;
	default: puts("Неправильный номер ответа"); break;
	}
}