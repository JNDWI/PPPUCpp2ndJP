// 問題文：
//  １～１００の素数をすべて見つけ出すプログラムを作成する。そのための常とう手段として、
//  「エラトステネスのふるい」と呼ばれる方法がある。この方法を知らない場合は、Web
//  で調べる。 この方法を使ってプログラムを作成する。

#include "../include/std_lib_facilities.h"

int
main()
{
    int limit{ 100 };
    vector<int> numbers(limit + 1);

    for (int i = 2; i <= limit; ++i) {
        if (numbers[i] == 0) {
            int x = i + i;
            while (x <= limit) {
                numbers[x] = 1;
                x += i;
            }
        }
    }

    std::cout << "1~" << limit << "までのすべての素数リスト\n";
    for (int i = 2; i <= limit; ++i) {
        if (numbers[i] == 0)
            std::cout << i << '\n';
    }

    return 0;
}