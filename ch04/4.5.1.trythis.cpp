#include "std_lib_facilities.h"

int square(int x)
{
	int result{ 0 };

	for (int i = 1; i <= x; ++i)
		result += x;

	return result;
}

int main()
{
	cout << "Number\tSquare" << endl;
	for (int i = 1; i<= 100; ++i)
		cout << i << '\t' << square(i) << endl;

	return 0;
}