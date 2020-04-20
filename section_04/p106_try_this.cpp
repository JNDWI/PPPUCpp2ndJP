#include "../../std_lib_facilities.h"

int square(int x)  //加算で二乗の結果を出す．
{
	int s = 0;
	int i;
	for (i = 1; i < x + 1; ++i)
		s += x;

	return s;
}

int main()
{
	cout << "Number\tSquare\n";
	int i;
	for (i = 0; i < 101; ++i)
		cout << i << '\t' << square(i) << '\n';
}