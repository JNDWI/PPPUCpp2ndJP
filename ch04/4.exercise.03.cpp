#include "std_lib_facilities.h"

int main()
{
	vector<double> distances = {};
	double distance{ 0 };
	double sum{ 0 };

	while (cin >> distance) {
		sum += distance;
		distances.push_back(distance);
	}

	sort(distances);
	cout << "総距離: " << sum << '\n'
		<< "最短距離: " << distances[0] << '\n'
		<< "最長距離: " << distances[distances.size() - 1] << '\n'
		<< "平均距離: " << sum / distances.size();

	return 0;
}