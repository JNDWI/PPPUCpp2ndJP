// 問題文：
//  練習問題１３のプログラムを書き換え、入力値 max を受け取り、１から max
//  までのすべての素数を検出するように変更する。

#include "../include/std_lib_facilities.h"

int main() {
    int limit{100};

    std::cout << ">> ";
    std::cin >> limit;

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
