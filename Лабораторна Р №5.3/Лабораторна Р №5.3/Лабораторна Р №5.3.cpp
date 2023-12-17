#include <iostream>
#include <cmath>

using namespace std;

double h(double* x) {
	if (abs(*x) >= 1) {
		*x = (cos(*x) + 1) / (pow(cos(*x), 2) + 1);
	}
	else
	{
		double S = 0;
		int i = 0;
		double a = 1;
		double b;
		S = a;
		b = 1 / cos(*x);
		do
		{
			i++;
			double R = (*x * *x) / ((2 * i - 1) * 2 * i);
			a *= R;
			S += a;
		} while (i < 6);
		*x = S;
	}
}

int main()
{
	double qp, qk, z, a, b, c;
	int n;
	cout << "qp = "; cin >> qp;
	cout << "qk = "; cin >> qk;
	cout << "n = "; cin >> n;
	double dq = (qk - qp) / n;
	double q = qp;
	a = q + 1;
	b = pow(q, 2) + 1;
	c = pow(q, 2);
	while (q <= qk)
	{
		z = h(&a) + h(&b) + pow(h(&c), 2);
		cout << q << " " << z << endl;
		q += dq;
	}
	return 0;
}
