// 問題文：
//  １～１００の素数をすべて見つけ出すプログラムを作成する。そのための方法の１つは、素数が順番
//  に配置された vector
//  を使用して、数字が素数かどうかをチェックする関数を記述することだ。
//  つまり、この vector が primes
//  という名前であるとすれば、primes[0]==2、primes[1]==3、 primes[2]==5
//  などを使用して、数字がそれよりも小さい素数で割り切れるかどうかをチェックする。
//  次に、１～１００の各数字が素数かどうかをチェックし、検出された素数を vector
//  に格納する
//  グループを記述する。また、検出された素数を一覧表示するぺ部のループも記述する。素数の
//  vector を primes
//  と比較することで、結果をチェックするとよいだろう。最初の素数は２である。

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
    int limit{ 100 };

    for (int i = 3; i <= limit; ++i) {
        if (check_primes(primes, i))
            primes.push_back(i);
    }

    std::cout << "1~100の素数リスト\n";
    for (int p : primes)
        std::cout << p << '\n';

    return 0;
}