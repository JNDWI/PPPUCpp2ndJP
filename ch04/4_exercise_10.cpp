// 問題文：
//  「じゃんけん」ゲームのプログラムを作成する。じゃんけんがどのようなものかわからない場合
//  は（Google を使って
//  Webで）調べる。調査はプログラマーの主な作業の１つである。この練 習問題は
//  switch 文を使って解く。また、このプログラムでは、ランダムな答えを返す必要が
//  ある。つまり、次にグー、チョキ、パーのどれを出すかをランダムに選択する。この段階では、
//  プログラムにランダムな性質を持たせるのは難しすぎるため、「次の値」として使用される一連
//  の値が含まれた vector を用意すればよい。vector
//  をプログラムに組み込む場合は、常に同じ
//  ゲームをプレイすることになるため、ユーザーに値を入力させたほうがいよいかもしれない。コン
//  ピューターの次の手を容易に推測できないよう、変化を持たせてみよう。
//
// コメント：
//  srand(67行目)、rand(73行目)、abs(75,80行目)は本書を順に進めている場合はわからないかもしれませんが、
//  簡単に説明すると前者２つはランダムな整数を生成するためのもの、後者のabsは絶対値を求めるときに使用するものです。
//  詳しくは cpprefjp - C++日本語リファレンス(https://cpprefjp.github.io)
//  で調べることお勧めします。

#include "../include/std_lib_facilities.h"
#include <cstdlib>
#include <ctime>
#include <random>

const vector<std::string> hand_list = {"グー", "チョキ", "パー"};

int get_user_hand() {
    std::string input;
    int number_input;
    int output{-1};

    if (std::cin >> number_input) {
        if (0 <= number_input && number_input <= 2)
            output = number_input;
    } else {
        std::cin.clear();
        std::cin >> input;
        if (input == "quit")
            output = -1;
        else {
            for (unsigned int i = 0; i < hand_list.size(); ++i) {
                if (input == hand_list[i])
                    output = i;
            }
        }
    }
    return output;
}

std::string cpu_hand_conv(unsigned int hand_number) {
    int output{0};

    for (unsigned int i = 0; i < hand_list.size(); ++i) {
        if (hand_number == i)
            output = i;
    }
    return hand_list[output];
}

int main() {
    bool quit = false;
    int user_hand{-1};
    int cpu_hand;

    std::cout
        << "コンピューターとじゃんけんするプログラムです。\n「グー(0), "
           "チョキ(1), パー(2)」から一つ選び、文字列またはそれに"
        << "対応する0から2の整数を入力してください。quit で終了します...\n>> ";

    srand(unsigned(time(nullptr)));
    while (!quit) {
        user_hand = get_user_hand();
        if (user_hand == -1)
            quit = true;
        else {
            cpu_hand = rand() % 3;
            std::cout << "コンピューターは " << cpu_hand_conv(cpu_hand)
                      << " よって...\n";
            if (std::abs(user_hand - cpu_hand) == 1) {
                if (user_hand < cpu_hand)
                    std::cout << "あなたの勝ち!";
                else
                    std::cout << "コンピューターの勝ち!";
            } else if (std::abs(user_hand - cpu_hand) == 2) {
                if (user_hand > cpu_hand)
                    std::cout << "あなたの勝ち!";
                else
                    std::cout << "コンピューターの勝ち!";
            } else
                std::cout << "引き分け!!!";
        }
        std::cout << "\n>> ";
    }

    return 0;
}