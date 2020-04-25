#include "../../std_lib_facilities.h"

int main()
{
	vector<double> dist;
	double total{ 0 };
		for (double m; cin >> m;) {
			dist.push_back(m);
			total += m;
		}
	sort(dist);
	cout << "最短距離は: " << dist[0]
		<< "\n最長距離は: " << dist[dist.size()-1]
		<< "\n距離の平均値は: " << total / dist.size()
		<< "\n合計値は: " << total;
}