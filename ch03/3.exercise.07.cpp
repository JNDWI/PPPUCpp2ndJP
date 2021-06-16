#include "std_lib_facilities.h"

int main()
{
	string a = { " " };
	string b = { " " };
	string c = { " " };
	string min, mid, max;

	cout << "3つの文字列を入力してください。: ";
	cin >> a >> b >> c;

	if (a < b) {
		if (a < c) {
			min = a;
			if (b < c) {
				mid = b;
				max = c;	// a,b,c
			}
			else {
				mid = c;
				max = b;	// a,c,b
			}
		}
		else {
			min = c;
			mid = a;
			max = b;		// c,a,b
		}
	}
	else {
		if (b < c) {
			min = b;
			if (a < c) {
				mid = a;
				max = c;	// b,a,c
			}
			else {
				mid = c;
				max = a;	// b,c,a
			}
		}
		else {
			min = c;
			mid = b;
			max = a;		// c,b,a
		}
	}

	cout << min << ", " << mid << ", " << max << endl;

	return 0;
}