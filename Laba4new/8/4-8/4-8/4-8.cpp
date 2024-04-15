#include <iomanip>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_CTYPE, "rus");
	char t, probel = ' ';
	cout << "Введите символ: "; cin >> t;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(5) << setfill(t) << t << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(5) << setfill(t) << t << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(3) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(11) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(5) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t;
	cout << setw(1) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(t) << t << endl;
}