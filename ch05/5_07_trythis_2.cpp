// TRY THIS
//  このプログラムの min_temp（最低気温）定数と
//  max_temp（最高気温）定数にふさわしい値を選択するために、情報源をいくつか調べてみる。
//  これらの値により、プログラムの実用性の限界が決まる。

#include "../include/std_lib_facilities.h"

constexpr double max_temp{ 9941 };    // 太陽の表面温度
constexpr double min_temp{ -459.67 }; // 絶対零度

int
main()
{
    vector<double> temps;

    for (double temp; cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    double high_temp = min_temp;
    double low_temp = max_temp;

    for (double x : temps) {
        if (x > high_temp)
            high_temp = x;
        if (x < low_temp)
            low_temp = x;
        sum += x;
    }

    cout << "High temperature: " << high_temp << '\n';
    cout << "Low Temperature: " << low_temp << '\n';
    cout << "Average temperature: " << sum / temps.size() << '\n';
}