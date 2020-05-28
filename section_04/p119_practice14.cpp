#include "../../std_lib_facilities.h"

int main()
{
	int max;
	int i, j;

	cout << "1からnまでの素数を算出します．nの値を入力してください\n---> ";
	cin >> max;
	vector<int>primes(max);
	for (i = 0; i < max; ++i) {
		primes[i] = 1;
	}
	primes[0] = 0;

	for (i = 1; i<int(sqrt(max)); ++i) {
		if (primes[i] == 1)
			for (j = i + 1; (i + 1)*j <= max; ++j)
				primes[(i + 1)*j - 1] = 0;
	}

	for (i = 0; i < max; ++i) {
		if (primes[i] == 1)
			cout << i + 1 << ' ';
	}
}