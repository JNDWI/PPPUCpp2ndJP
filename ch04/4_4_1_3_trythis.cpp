#include "../include/std_lib_facilities.h"

int main() {
    // 定義
    // 2020/04/11の変換レートを使用しています。 by google.com
    constexpr double yen_per = 108.40;
    constexpr double euro_per = 0.91;
    constexpr double pound_per = 0.80;
    double value = 0;
    char currency = {' '};

    // プロンプト
    std::cout << "通貨の値を入力した後、通貨の種類を表す指定された英字を入力し"
                 "てください。"
              << std::endl
              << "日本円は [y]" << std::endl
              << "ユーロは [e]" << std::endl
              << "ポンドは [p]" << std::endl
              << ">>";
    std::cin >> value >> currency;

    // 出力
    switch (currency) {
    case 'y':
        std::cout << value << " 円は " << value / yen_per << " ドルです。"
                  << std::endl;
        break;
    case 'e':
        std::cout << value << " ユーロは " << value / euro_per << " ドルです。"
                  << std::endl;
        break;
    case 'p':
        std::cout << value << " ポンドは " << value / pound_per << " ドルです。"
                  << std::endl;
        break;
    default:
        std::cout << "「" << currency << "」"
                  << " はサポートされていない文字です。"
                  << " \"" << currency << "\" is not supported." << std::endl;
        break;
    }

    return 0;
}