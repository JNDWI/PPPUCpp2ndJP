#include "std_lib_facilities.h"

int main()
{
	int val1 = 0;
	int val2 = 0;
	cout << "2つの整数値を入力してください。: ";
	cin >> val1 >> val2;
	if (val1 < val2)
		cout << '\n' << val1 << " < " << val2 << endl;
	else
		cout << '\n' << val2 << " < " << val1 << endl;
	cout << val1 << " + " << val2 << " = " << val1 + val2 << endl;
	cout << val1 << " - " << val2 << " = " << val1 - val2 << endl;
	cout << val1 << " * " << val2 << " = " << val1 * val2 << endl;
	cout << val1 << " / " << val2 << " = " << val1 / val2 << endl;

	return 0;
}