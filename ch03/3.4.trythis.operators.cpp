#include "std_lib_facilities.h"

int main()
{
	cout << "整数値を入力してください: ";
	int n;
	cin >> n;
	double m = n;

	cout << "n == " << n << endl
		<< "n+1 == " << n + 1 << endl
		<< "three times n ==" << 3 * n << endl
		<< "twice n == " << 2 * n << endl
		<< "n squared == " << n * n << endl
		<< "half of n == " << n / 2 << endl
		<< "square root of n == " << sqrt(m) << endl
		<< "n/2 == " << n / 2 << endl
		<< "n%2 == " << n % 2 << endl;

		return 0;
}