#include <iostream>
using namespace std;

void main()
{
	double w, v, x = 1.1, a = 5e-6;
	int b = 40;
	w = (a + b) * tan(x) / (x + 1);
	v = 0.5 * b - sqrt(w - a * b);
	cout << "w =" << w << endl;
	cout << "v =" << v;
}
// 5