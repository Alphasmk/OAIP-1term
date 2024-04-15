#include <iostream>
using namespace std;

void main()
{
	double p, q, y = -1.2, x = 0.4e10 - 6;
	int t = 6;
	p = 2.6 * t + cos(y / (3 * x + y));
	q = sin(t) / cos(t);
	cout << "p = " << p << endl;
	cout << "q = " << q;
}