// TRY THIS
//  この area関数の事前条件を満たし、事後条件を満たさない値のペアを探してみる。
//
// コメント
//  length * width が
//  int型に収まらないサイズになれば事後条件は満たされない。よってオーバーフローを起こさせればよい。
//  50000 * 50000 などがペアの一例に当たる。

#include "../include/std_lib_facilities.h"

int area(int length, int width)
// 四角形の面積を計算する
// 事前条件: length と width は正
// 事後条件: 面積を表す正の値を返す
{
    if (length <= 0 || width <= 0)
        throw runtime_error("area() pre-condition");
    int a = length * width;
    if (a <= 0)
        throw runtime_error("area() post-condition");
    return a;
}

int main() try {
    int length;
    int width;

    std::cout
        << "四角形の面積を計算します。縦と横の長さを入力してください...\n>> ";

    while (cin >> length >> width) {
        std::cout << "面積は " << area(length, width) << '\n';
    }

    return 0;
} catch (runtime_error &e) {
    std::cout << "Error: " << e.what() << '\n';
    return 1;
} catch (...) {
    std::cout << "Unknown Error...\n";
    return 2;
}