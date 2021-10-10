#include "../include/std_lib_facilities.h"

int main() {
    double d = 0;
    while (std::cin >> d) { // 数字を入力している間は、以下の文を繰り返し実行
        int i = d;  // double から int への変換を試みる
        char c = i; // int から char への変換を試みる
        int i2 = c; // 文字の整数値を取得
        std::cout << "出力結果-> "
                  << "d == " << d             // 元の double 値
                  << ", i == " << i           // int への変換
                  << ", i2 == " << i2         // char の int 値
                  << ", char(" << c << ")\n"; // char
    }
}

/*
PPPUC++2ndJP\ch03> .\bin\3.9.trythis.unsafeconvs.exe
2
出力結果-> d == 2, i == 2, i2 == 2, char()
3
出力結果-> d == 3, i == 3, i2 == 3, char()
127
出力結果-> d == 127, i == 127, i2 == 127, char()
1000
出力結果-> d == 1000, i == 1000, i2 == -24, char(・
120
出力結果-> d == 120, i == 120, i2 == 120, char(x)
-1000
出力結果-> d == -1000, i == -1000, i2 == 24, char()
56
出力結果-> d == 56, i == 56, i2 == 56, char(8)
89
出力結果-> d == 89, i == 89, i2 == 89, char(Y)
128
出力結果-> d == 128, i == 128, i2 == -128, char()
56.9
出力結果-> d == 56.9, i == 56, i2 == 56, char(8)
56.2
出力結果-> d == 56.2, i == 56, i2 == 56, char(8)
*/