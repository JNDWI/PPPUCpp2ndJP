// 問題文：
//  string型の一連の値から最小値、最大値、最頻値を検出するプログラムを作成する。

#include "../include/std_lib_facilities.h"

int
main()
{
    vector<std::string> input;
    std::string element;
    bool quit{ false };

    std::cout << "string型の一連の値から最小値, 最大値, "
                 "最頻値を検出します。文字列リテラルを入力してください...\n("
                 "\"9;\"で退出します)\n>> ";

    while (!quit) {
        std::cin >> element;
        if (element == "q;") {
            std::cout << "入力を終了します...\n";
            quit = true;
        } else
            input.push_back(element);
    }

    if (input.size() != 0) {
        vector<std::string> values;
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

        int mod{ 0 };
        unsigned int mod_element{ 0 };
        for (unsigned int j = 0; j < times.size(); ++j) {
            if (times[j] > mod) {
                mod = times[j];
                mod_element = j;
            }
        }
        std::cout << "最頻値は " << values[mod_element] << ", 入力された回数は "
                  << times[mod_element] << " 回でした。\n";

        std::string min;
        unsigned int min_element{ 0 };
        min = values[0];
        for (unsigned int k = 0; k < values.size(); ++k) {
            if (min > values[k]) {
                min = values[k];
                min_element = k;
            }
        }
        std::cout << "最小値は " << min << ", 入力された回数は "
                  << times[min_element] << " 回でした。\n";

        std::string max;
        unsigned int max_element{ 0 };
        max = values[0];
        for (unsigned int l = 0; l < values.size(); ++l) {
            if (max < values[l]) {
                max = values[l];
                max_element = l;
            }
        }
        std::cout << "最大値は " << max << ", 入力された回数は "
                  << times[max_element] << " 回でした。\n";
    } else
        std::cout << "入力された文字列リテラルはありませんでした。\n";

    return 0;
}