#include "../../std_lib_facilities.h"

int main()
{
	vector<double> temps;
	for (double temp; cin >> temp;)
		temps.push_back(temp);

	sort(temps);
	if (temps.size() % 2 == 0)				//偶数の場合
		cout << "Median temprature: " << (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2.0 << '\n';
	else if(temps.size()%2==1)			//奇数の場合
		cout << "Median temprature: " << temps[temps.size() / 2] << '\n';
}