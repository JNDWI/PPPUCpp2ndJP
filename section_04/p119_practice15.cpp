#include "../../std_lib_facilities.h"

int isPrime(int number, vector<int>primes)
{
	int i{ 0 };
	bool is_prime{ true };

	while (is_prime && i < primes.size()) {
		if (number%primes[i] == 0)
			is_prime = false;
		++i;
	}

	return is_prime;
}

int main()
{
	vector<int> primes;
	primes.push_back(2);

	cout << "入力された整数値分の素数を出力します．整数を入力してください\n---> ";
	int primeLimit;
	cin >> primeLimit;

	int count{ 1 };
	int number{ 3 };

	while (count < primeLimit) {
		if (isPrime(number, primes)) {
			primes.push_back(number);
			++count;
		}
		++number;
	}

	for (int x : primes) {
		cout << x << ' ';
	}
}