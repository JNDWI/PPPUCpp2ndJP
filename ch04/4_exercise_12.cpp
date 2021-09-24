// 問題文：
//  練習問題１１のプログラムを書き換え、入力値 max を受け取り、１から max
//  までのすべての素数 を検出するように変更する。
//
// コメント：
//  4_exercise_11.cpp
//  から出力と入力に関する文を２行追加、それに合わせて小さな変更を加えた。

#include "../include/std_lib_facilities.h"

bool
check_primes(vector<int> primes, int number)
{
    bool is_prime{ true };
    unsigned int i{ 0 };

    while (is_prime && i < primes.size()) {
        if (number % primes[i] == 0)
            is_prime = false;
        ++i;
    }
    return is_prime;
}

int
main()
{
    vector<int> primes;
    primes.push_back(2);
    int max{ 100 };

    std::cout << ">> ";
    std::cin >> max;

    for (int i = 3; i <= max; ++i) {
        if (check_primes(primes, i))
            primes.push_back(i);
    }

    std::cout << "1~" << max << "の素数リスト\n";
    for (int p : primes)
        std::cout << p << '\n';

    return 0;
}