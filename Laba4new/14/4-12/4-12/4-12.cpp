#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int t, d, e, f, a = 50, b = 100, c = 200;
	cout << "Введите число сбитых самолётов: "; cin >> d;
	cout << "Введите число сбитых ракет: "; cin >> e;
	cout << "Введите число сбитых спутников: "; cin >> f;
	t = d * a + b * e + f * c;
	cout << "Число очков: " << t;
}