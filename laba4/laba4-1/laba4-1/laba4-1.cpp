#include <iostream>
#include <iomanip>
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "Russian");
	char t, pr; pr = ' ';
	cout << "Введите символ "; cin >> t;
	cout << setw(1) << setfill(pr) << pr << endl;
	cout << setw(18) << setfill(pr) << pr;
	cout << setw(13) << setfill(t) << t << endl;
	cout << setw(14) << setfill(pr) << pr;
	cout << setw(21) << setfill(t) << t << endl;
	cout << setw(12) << setfill(pr) << pr;
	cout << setw(25) << setfill(t) << t << endl;	
	cout << setw(9) << setfill(pr) << pr;
	cout << setw(31) << setfill(t) << t << endl;
	cout << setw(8) << setfill(pr) << pr;
	cout << setw(33) << setfill(t) << t << endl;
	cout << setw(7) << setfill(pr) << pr;
	cout << setw(35) << setfill(t) << t << endl;
	cout << setw(7) << setfill(pr) << pr;
	cout << setw(35) << setfill(t) << t << endl;
}