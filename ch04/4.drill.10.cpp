#include "std_lib_facilities.h"

constexpr double CM_PER_M{ 100.0 };
constexpr double CM_PER_IN{ 2.54 };
constexpr double IN_PER_FT{ 12.0 };
constexpr double M_PER_HYDE{ 1.56 };
const vector<string> legal_units{ "cm","m","in","ft","hyde" };

bool is_legal_unit(string unit, vector<string> legal_units)
{
	for (int i = 0; i < legal_units.size(); ++i) {
		if (unit == legal_units[i])
			return true;
		else;
	}
	return false;
}

double conv_into_m(double value, string unit)
{
	if (unit == "m")
		return value;
	else if (unit == "cm")
		return value / CM_PER_M;
	else if (unit == "in")
		return value * CM_PER_IN / CM_PER_M;
	else if (unit == "ft")
		return value * IN_PER_FT * CM_PER_IN / CM_PER_M;
	else
		return value * M_PER_HYDE;
}

double min(vector<double> a)
{
	double val = a[0];

	for (int i = 0; i < a.size(); ++i) {
		if (a[i] < val)
			val = a[i];
		else;
	}
	return val;
}

double max(vector<double> b)
{
	double val = b[0];

	for (int i = 0; i < b.size(); ++i) {
		if (b[i] > val)
			val = b[i];
		else;
	}
	return val;
}
int main()
{
	vector<double> values{};
	vector<double> legal_meters{};
	double input{ 0 };
	string unit{ "" };
	double smallest{ 0 };
	double largest{ 0 };
	double sum{ 0 };
	int count{ 0 };

	while (cin >> input >> unit) {
		if (is_legal_unit(unit, legal_units) == true) {
			values.push_back(conv_into_m(input, unit));
			++count;
			sum += conv_into_m(input, unit);
			legal_meters.push_back(conv_into_m(input, unit));
			if (conv_into_m(input, unit) == min(values)) {
				cout << '\t' << input << unit << '(' << conv_into_m(input, unit) << "m)" << " the smallest so far." << endl;
				smallest = conv_into_m(input, unit);
			}
			else if (conv_into_m(input, unit) == max(values)) {
				cout << '\t' << input << unit << '(' << conv_into_m(input, unit) << "m)" << " the largest so far." << endl;
				largest = conv_into_m(input, unit);
			}
			else
				cout << '\t' << input << unit << '(' << conv_into_m(input, unit) << "m)" << endl;
		}
		else
			cout << "無効な単位です." << endl;
	}

	cout << "最小値: " << smallest << 'm' << endl
		<< "最大値: " << largest << 'm' << endl
		<< "値の個数: " << count << endl
		<< "値の合計: " << sum << 'm' << endl;

	cout << "入力された値: " << endl;
	for (double value : legal_meters)
		cout << value << 'm' << endl;

	return 0;
}