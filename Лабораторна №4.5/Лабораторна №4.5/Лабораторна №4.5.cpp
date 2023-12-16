#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, R, y;
	string text;

	cout << "xp = ";
	cin >> xp;
	cout << "xk = ";
	cin >> xk;
	cout << "dx = ";
	cin >> dx;
	cout << "y = ";
	cin >> y;
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
		if (pow((x - R), 2) + pow((y - R), 2) == pow(R, 2) || (y == x && -R <= y <= 0))
		{
			cout << x << "   True" << endl;
		}
		else
		{
			cout << x << "   False" << endl;
		}
		x += dx;
	}
	cout << "----------------------" << endl;

	return 0;
}
