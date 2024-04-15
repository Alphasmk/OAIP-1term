#include <iostream>
using namespace std;

void main()
{
	double d, f, x = 4.5, z = 1.5e-6;
	int i = -6;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	cout << "d =" << d << endl;
	cout << "f =" << f;
}
// 3