#include "../../std_lib_facilities.h"

int main()
{
	int val;
	vector <int>primes = { 2 };

	cout << "1から100までの整数を一つ入力してください． ---> ";
	cin >> val;

	for (int i = 0; i < primes.size(); ++i) {
		while (val%primes[i] == 0) {
			primes.push_back(val);
		}
	}
}