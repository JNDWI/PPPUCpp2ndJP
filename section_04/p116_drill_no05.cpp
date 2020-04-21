#include "../../std_lib_facilities.h"

int main()
{
	double a, b;
	char c{};
	constexpr char end = '|';

	cout << "Please enter 2 floating point values.if you want to quit,type | to exit.: ";
	while (cin >> c && c != end) {
		cin.putback(c);
		if (cin >> a >> b) {
			double d = abs(a - b);  //abs関数(p1156を参照)
			cout << "Entered numbers is " << a << ' ' << b << '\n';
			if (a < b) {
				cout << "the smaller value is: " << a << '\n';
				cout << "the larger value is: " << b << "\n";
				if (d < 1.0 / 100)  //差が0.01未満なら
					cout << "the number is almost equal\n";
			}
			else if (a == b) {
				cout << "the numbers are equal\n";
			}
			else {
				cout << "the smaller value is: " << b << '\n';
				cout << "the larger value is: " << a << "\n";
				if (d < 1.0 / 100)  //差が0.01未満なら
					cout << "the number is almost equal\n";
			}
		}
		else {
			cin >> c;
			if (c == end) {
				break;
			}
			cout << "Please dont enter invalid value,try again: \n";
		}
		cout << "Please enter 2 floating point value.if you want to quit,type | to exit.: ";
	}
	return 0;
}
