// 問題文：
//  入力値 n を受け取り、最初の n 個の素数を検出するプログラムを作成する。

#include "../include/std_lib_facilities.h"

bool check_primes(vector<int> primes, int number) {
    bool is_prime{true};
    unsigned int i{0};

    while (is_prime && i < primes.size()) {
        if (number % primes[i] == 0)
            is_prime = false;
        ++i;
    }
    return is_prime;
}

int main() {
    vector<int> primes;
    primes.push_back(2);
    int limit{0};
    int count{1};
    int target_number{3};

    std::cout << "検出したい素数の個数を入力してください...\n>>";
    std::cin >> limit;

    while (count < limit) {
        if (check_primes(primes, target_number)) {
            primes.push_back(target_number);
            ++count;
        }
        ++target_number;
    }

    std::cout << "最初の " << limit << " 個の素数のリスト...\n";
    for (int p : primes)
        std::cout << p << '\n';

    return 0;
}