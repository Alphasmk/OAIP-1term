#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	double a, b, c, r, s, t, y, z;
	cout << "Введите размерность коробки a x b x c: " << endl; cin >> a; cin >> b; cin >> c;
	cout << "Введите размерность коробки r x s x t: " << endl; cin >> r; cin >> s; cin >> t;
	if ((a <= r && b <= s && c <= t) || (a <= r && b <= t && c <= s)||(a <= s && b <= r && c <= t)||(a <= s && b <= t && c <= r)||(a <= t && b <= r && c <= s)||(a <= t && b <= s && c <= r))
		cout << "Можно";
	else
		cout << "Нельзя";
}