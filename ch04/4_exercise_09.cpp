// 問題文：
//  練習問題８で考案者が所望した米のグレイン量を計算する。数字が大きすぎて int
//  または double 型の変数に収まらないことがわかるだろう。int および double
//  型の値として正確に表
//  せないほど数字が大きくなった場合はどうなるか。（int型を使って）正確なグレイン量を計算
//  できる升目は最大でいくつになるか。（double型を使って）おおよそのグレイン量を計算でき
//  る升目の数は最大でいくつになるか。
//
// コメント：
//  int
//  型は３１升目まで正確なグレイン量を計算できたが、３２升目からオーバーフローした。
//  対して double 型は６４升目まで問題なく計算できた。（指数記法だが）
//  以下にこのプログラムの出力の一部を載せておきます。（すこし整形してます）
//  31 square       int 2147483647      double 2.14748e+09
//  32 square       int -1              double 4.29497e+09
//  ~~~
//  63 square       int -1              double 9.22337e+18
//  64 square       int -1              double 1.84467e+19

#include "../include/std_lib_facilities.h"

int main() {
    int rice{0};
    int rice_add{1};
    double drice{0};
    double drice_add{1};

    for (int square = 1; square <= 64; ++square) {
        rice += rice_add;
        drice += drice_add;
        rice_add *= 2;
        drice_add *= 2;
        std::cout << square << " square\tint " << rice << "\tdouble " << drice
                  << '\n';
    }

    return 0;
}