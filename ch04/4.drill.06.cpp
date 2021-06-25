#include "std_lib_facilities.h"

double min(vector<double> a)
{	
	double val = a[0];

	for (double i = 0; i < a.size(); ++i) {
		if (a[i] < val)
			val = a[i];
		else;
	}

	return val;
}

double max(vector<double> b)
{
	double val = b[0];

	for (double i = 0; i < b.size(); ++i) {
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

	while (cin >> input) {
		numbers.push_back(input);
		if (input == min(numbers))
			cout << '\t' << input << " the smallest so far." << endl;
		else if (input == max(numbers))
			cout << '\t' << input << " the largest so far." << endl;
		else
			cout << '\t' << input << endl;
	}

	return 0;
}