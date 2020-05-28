#include "../../std_lib_facilities.h"

int main()
{
	vector<int>primes = { 2 };
	int count{ 0 };

	for (int i = 3; i <= 100; ++i) {
		bool is_prime = true;
		
		for (int prime : primes) {
			if (i%prime == 0)
				is_prime = false;
		}
		if (is_prime == true) {
			primes.push_back(i);
		}
	}
	for (int x : primes) {
		++count;
		if (count != primes.size())
			cout << x << " ,";
		else if (count == primes.size())
			cout << x;
	}
}