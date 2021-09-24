// 問題文：
//  練習問題５の電卓プログラムを書き換え、数字又は単語として書かれた１桁の数字（のみ）を
//  受け取るように変更する。
//
// コメント：
//  ・少しでもコンソールlikeにするために、quit
//  と入力しプログラムを終了するようにしました。 （generate_number関数から -2
//  を受け取ると bool quit が true になりwhileループが終了します。）
//  ・文字列と演算子をスペースを空けずに入力すると、文字列+演算子をstringとして読み込んで
//  しまうので、使う際は演算子の前後にスペースを空ける必要があります。
//  ・unsigned と signed の数値の比較による警告を回避するために、24行目は
//  int(names.size())に、 34行目は unsigned int と記述してある。

#include "../include/std_lib_facilities.h"

const vector<std::string> names = { "zero", "one", "two",   "three", "four",
                                    "five", "six", "seven", "eight", "nine" };

int
generate_number()
{
    std::string name;
    int number{ 0 };
    int output{ -1 };

    if (std::cin >> number) {
        if (number < 0 || number >= int(names.size()))
            std::cout << "入力された整数は有効ではありません。\n";
        else
            output = number;
    } else {
        std::cin.clear();
        std::cin >> name;
        if (name == "quit")
            output = -2;
        else {
            for (unsigned int i = 0; i < names.size(); ++i) {
                if (name == names[i])
                    output = i;
            }
            if (output == -1)
                std::cout << "入力された " << name
                          << " は有効な文字列ではありません。\n";
        }
    }
    return output;
}

int
main()
{
    bool quit = false;
    double val1{ 0 };
    double val2{ 0 };
    char op{ ' ' };

    std::cout << "1桁電卓プログラムです。\n"
              << "一桁の整数(0~9)又はその英語名を演算子(+ - * "
                 "/)を挟んで入力してください。("
                 "演算子の前後にはスペースを入力してください)\n"
              << "quit で終了します...\n>> ";

    while (!quit) {
        val1 = generate_number();
        if (val1 == -1) {
            std::cin.clear();
            val1 = 0;
            std::cout << "もう一度やり直してください。\n>> ";
        } else if (val1 == -2) {
            std::cout << "プログラムを終了します...\n";
            quit = true;
        } else {
            cin >> op;
            val2 = generate_number();
            if (val2 == -1) {
                std::cin.clear();
                val2 = 0;
                std::cout << "もう一度やり直してください。\n>> ";
            } else {
                switch (op) {
                    case '+':
                        std::cout << "The sum of " << val1 << " and " << val2
                                  << " is " << val1 + val2 << '\n';
                        break;
                    case '-':
                        std::cout << "The difference of " << val1 << " and "
                                  << val2 << " is " << val1 - val2 << '\n';
                        break;
                    case '*':
                        std::cout << "The product of " << val1 << " and "
                                  << val2 << " is " << val1 * val2 << '\n';
                        break;
                    case '/':
                        if (val2 != 0)
                            std::cout << "The division of " << val1 << " and "
                                      << val2 << " is " << val1 / val2 << '\n';
                        else
                            std::cout << "ERROR: Division by zero\n";
                        break;
                    default:
                        break;
                }
                std::cout << ">> ";
            }
        }
    }

    return 0;
}