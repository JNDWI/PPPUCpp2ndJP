// 問題文：
//  ドリルでは、一連の値から最大値と最小値を検出するプログラムを作成した。数列に最も多く含まれている
//  数字は最頻値（mode）と呼ばれる。一連の値から正の整数の最頻値を検出するプログラムを作成する。

#include "../include/std_lib_facilities.h"

int main() {
    vector<int> input;
    int element{0};

    std::cout << "正の整数の最頻値を検出するプログラムです。一連の正の整数値を"
                 "入力してください...\n>> ";

    while (cin >> element)
        input.push_back(element);

    if (input.size() != 0) {
        vector<int> values;
        vector<int> times;

        sort(input);
        values.push_back(input[0]);
        times.push_back(1);
        for (unsigned int i = 1; i < input.size(); ++i) {
            if (input[i] == input[i - 1])
                ++times[times.size() - 1];
            else {
                values.push_back(input[i]);
                times.push_back(1);
            }
        }

        int max{0};
        int target_element{0};

        for (unsigned int j = 0; j < times.size(); ++j) {
            if (times[j] > max) {
                max = times[j];
                target_element = j;
            }
        }
        std::cout << "最頻値は " << values[target_element]
                  << ", 入力された回数は " << times[target_element]
                  << " 回でした。\n";
    } else {
        std::cout << "入力された整数値はありませんでした。\n";
    }

    return 0;
}