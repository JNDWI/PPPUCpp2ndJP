// 問題文：
//  「チェス」を考案したものに褒美を与えようと考えた皇帝が、望みは何かと尋ねたという昔話があ
//  る。そのものは、チェス盤の１つ目の升目に１グレインのコメ、２つ目の升目に２グレインの米、
//  ３つ目の升目には４グレインの米といったように、６４の升目ごとに２倍のの量の米を所望した。謙
//  虚な申し出のように思えたが、帝国にはそれだけの米がなかった。少なくとも１,０００グレイン、
//  少なくとも１００万グレイン、そして少なくとも１０億グレインの米を褒美として与えるのに必要
//  な升目の数を計算するプログラムを作成する。当然ながら、ループが必要である。また、現在の
//  升目を追跡するための int 型の変数、現在の升目のグレイン量を追跡するための
//  int 型の変数、 それまでのすべての升目のグレイン量を追跡するための int
//  型の変数がおそらく必要になるだろ
//  ろう。ループを繰り返すたびにすべての変数の値を書き出し、現在の状況がわかるようにすると
//  よいだろう。
//
// コメント：
//  1000グレインは10升目まで、100万グレインは20升目まで、10億グレインは30升目までとなった。

#include "../include/std_lib_facilities.h"

int main() {
    bool exit = false;
    std::string input;
    int total_grain{0};
    int add_grain{1};
    int times{0};
    int request_grain{0};

    cout << "グレイン数を入力してください...(quitで終了します)\n"
         << "times\t\tadded grain\t\ttotal grain\n>> ";

    while (!exit) {
        if (std::cin >> request_grain) {
            total_grain = 0;
            add_grain = 1;
            times = 0;
            while (total_grain < request_grain) {
                ++times;
                total_grain += add_grain;
                add_grain *= 2;
                std::cout << times << "\t\t" << add_grain / 2 << "\t\t"
                          << total_grain << '\n';
            }
        } else {
            std::cin.clear();
            std::cin >> input;
            if (input == "quit")
                exit = true;
        }
        std::cout << ">> ";
    }

    return 0;
}