#include "std_lib_facilities.h"

constexpr double CM_PER_M{ 100.0 };
constexpr double CM_PER_IN{ 2.54 };
constexpr double IN_PER_FT{ 12.0 };
constexpr double M_PER_HYDE{ 1.61 };
const vector<string> legal_units{ "cm","m","in","ft","hyde" };

bool is_legal_unit(string a, vector<string> legal_units)
{
	for (int i = 0; i < legal_units.size(); ++i) {
		if (a == legal_units[i])
			return true;
		else;
	}
	return false;
}

double conv_into_m(double a, string b)
{
	if (b == "m")
		return a;
	else if (b == "cm")
		return a / CM_PER_M;
	else if (b == "in")
		return a * CM_PER_IN / CM_PER_M;
	else if (b == "ft")
		return a * IN_PER_FT * CM_PER_IN / CM_PER_M;
	else if (b == "hyde")
		return a * M_PER_HYDE;
	else;
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
	vector<double> numbers{};
	double input{ 0 };
	string unit{ "" };

	while (cin >> input >> unit) {
		if (is_legal_unit(unit, legal_units) == true) {
			numbers.push_back(input);
			if (input == min(numbers))
				cout << '\t' << input << " the smallest so far." << endl;
			else if (input == max(numbers))
				cout << '\t' << input << " the largest so far." << endl;
			else
				cout << '\t' << input << endl;
		}
		else
			cout << "無効な単位です." << endl;
	}

	return 0;
}