#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double a, b, p, q, r, s;
	cout << "Введите размерность площадки axb: " << endl; cin >> a; cin >> b;
	cout << "Введите размерность дома pxq: " << endl; cin >> p; cin >> q;
	cout << "Введите размерность дома rxs: " << endl; cin >> r; cin >> s;
	if (p + r <= a && q + s <= b || p + s <= a && q + r <= b)
		cout << "Можно";
	else
		cout << "Нельзя";
}