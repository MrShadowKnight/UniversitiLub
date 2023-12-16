#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, y, R;

	cout << "xp = ";
	cin >> xp;
	cout << "xk = ";
	cin >> xk;
	cout << "dx = ";
	cin >> dx;
	cout << "R = ";
	cin >> R;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(5) << "x" << "   |"
		<< setw(7) << "y" << "    |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		if (x >= 2 * R) {
			y = R;
		}
		else if (R < x && x < 2 * R) {
			y = sqrt(pow(R, 2) - pow((x - R), 2));
		}
		else if (0 < x && x <= R) {
			y = R - sqrt(pow((-R), 2) - pow(x, 2));
		}
		else {
			y = (-6 - R) / (x - R);
		}
	cout << "|" << setw(7) << setprecision(2) << x
		<< " |" << setw(10) << setprecision(3) << y
		<< " |" << endl;

	x += dx;
	}
cout << "------------------------" << endl;
}