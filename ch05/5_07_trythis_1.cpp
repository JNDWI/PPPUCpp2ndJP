// TRY THIS
//  このプログラムを実行し、これらの入力からその出力が実際に生成されることを確かめる。別の入力を指定して、プログラムを失敗させてみる。
//  プログラムを失敗させるために指定できる入力値のうち、最小の値は何だろうか。

#include "../include/std_lib_facilities.h"

int main() {
    vector<double> temps;

    for (double temp; cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    double high_temp = 0;
    double low_temp = 0;

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