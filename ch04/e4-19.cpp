// 問題文：
//  Joe 17 と Barbara 22
//  のように、最初に名前とスコアの組を入力させるプログラムを作成する。
//  これらの組ごとに、名前を names という名前の vector に追加し、スコアを scores
//  という名前の vector に追加する。 names[7]=="Joe" の場合は、scores[7]==17
//  になる。入力は NoName 0 で終了する。名前がそれぞれ一意であることを確認し、
//  重複する名前が入力された場合はエラーメッセージを出力して終了する。名前とスコアの組は１行に１つずつ出力する。

#include "../include/std_lib_facilities.h"

vector<std::string> names;
vector<unsigned int> scores;

bool scrutinize_names(std::string input_name, vector<std::string> name_list) {
    bool result{true};

    for (unsigned int i = 0; i < name_list.size(); ++i) {
        if (name_list[i] == input_name)
            result = false;
    }

    return result;
}

int main() {
    std::string name{"NoName"};
    unsigned int score{0};
    bool quit{false};

    std::cout
        << "名前とスコアを入力し、出力するプログラムです。\n名前に "
           "\"NoName\"、又はスコアを0と入力するとプログラムは終了します。\n>> ";

    while (!quit && (cin >> name >> score)) {
        if (name == "NoName" || score == 0) {
            std::cout << "データ入力を終了します...\n";
            quit = true;
        } else {
            if (!scrutinize_names(name, names)) {
                std::cout << "ERROR: " << name
                          << " はすでに使用されています。\n";
                quit = true;
            } else {
                names.push_back(name);
                scores.push_back(score);
                std::cout << ">> ";
            }
        }
    }

    if (names.size() == 0) {
        std::cout << "入力されたデータはありませんでした。\n";
    } else {
        std::cout << "プレイヤーの名前とスコアのリストを出力します...\n";
        for (unsigned int j = 0; j < names.size(); ++j) {
            std::cout << names[j] << "\tスコア: " << scores[j] << '\n';
        }
    }

    return 0;
}