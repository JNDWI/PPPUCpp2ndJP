// 問題文：
//  "zero"、"one"、 ・・・、 "nine" という１０個の文字列を格納する vector
//  を作成する。この vector
//  を、入力した数字がそれに対応する単語に変換されるプログラムで使用する。たとえば
//  7 と入力されたら seven
//  を出力する。数字から単語への変換ができたら、次は逆に単語で表せ
//  れた数字を数字形式に変換する。たどえば seven と入力されたら 7 を出力する。
//
// コメント：
//  本書を前から順に進めている場合、34行目の cin.clear()
//  を知る術はないだろうが、この問題を進めるにあたって cin.clear()
//  を使わないとプログラムが複雑になってしまうので使用しています。

#include "../include/std_lib_facilities.h"

const vector<std::string> names = {"zero", "one", "two",   "three", "four",
                                   "five", "six", "seven", "eight", "nine"};

int get_number(string name) {
    int result{-1};
    for (unsigned int x = 0; x < names.size(); ++x) {
        if (names[x] == name)
            result = x;
    }

    return result;
}

int main() {
    int number{0};
    std::string name{""};
    bool quit{false};

    std::cout << "1桁の整数値を入力して整数の英語名を取得、\n"
              << "又は1桁の整数の英語名を入力してアラビア数字を取得します。\n"
              << "(\'quit\'で終了する)\n";

    while (!quit) {
        cout << ">> ";
        if (std::cin >> number) {
            if (number >= 0 && number < 10)
                std::cout << names[number] << '\n';
            else
                std::cout << "無効な整数値です。\n";
        } else {
            std::cin.clear();
            std::cin >> name;
            if (name == "quit")
                quit = true;
            else {
                int n = get_number(name);
                if (n == -1)
                    std::cout << "無効な文字列です。\n";
                else
                    std::cout << n << '\n';
            }
        }
    }

    return 0;
}