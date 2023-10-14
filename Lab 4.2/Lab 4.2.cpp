#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, start, end, step, a, b, y;
	cout << "xp = "; cin >> start;
	cout << "xk = "; cin >> end;
	cout << "dx = "; cin >> step;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = start;
	while (x <= end)
	{
		a = ((2 + x) / pow(x, 2)) + 1;
		if (x < 0)
			b = pow(x, 3) - 2 * pow(x, 4);
		else
			if (x >= 0 && x <= 2)
				b = pow(abs(x) + exp(x), 3);
			else
				b = 4 * cos(pow(x, 2) - 2);
		y = a + b;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += step;
	}
	cout << "---------------------------" << endl;
	return 0;
}
