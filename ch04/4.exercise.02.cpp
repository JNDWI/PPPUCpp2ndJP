#include "std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	for (int x : temps)sum += x;
	cout << "Average temperature: " << sum / temps.size() << '\n';

	sort(temps);
	if (temps.size() % 2 == 0)
		cout << "Median temperature: " << (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2 << '\n';
	else
		cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

	return 0;
}