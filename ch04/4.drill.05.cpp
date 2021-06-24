#include "std_lib_facilities.h"

constexpr double TOLERANCE{ 1.0 / 100 };

bool almost_equal(double a, double b)
{
	if (abs(a - b) < TOLERANCE)
		return true;
	else
		return false;
}

double min(double a, double b)
{
	if (a < b)
		return a;
	else
		return b;
}

double max(double a, double b)
{
	if (a >= b)
		return a;
	else
		return b;
}

int main()
{
	double val1{ 0 };
	double val2{ 0 };

	while (cin >> val1 >> val2) {
		if (val1 == val2)
			cout << "the numbers are euqal" << endl;
		else {
			cout << "the smaller value is: " << min(val1, val2) << endl
				<< "the larger value is: " << max(val1, val2) << endl;
			if (almost_equal(val1,val2) == true)
				cout << "the numbers are almost equal" << endl;
			else;
		}
	}

	return 0;
}