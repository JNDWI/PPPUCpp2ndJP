// 問題文：
//  練習問題１９のプログラムを書き換え、名前を入力したら対応するスコアを出力するか、"name
//  not found" を出力するように変更する。

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

int get_score(std::string name, vector<std::string> name_list,
              vector<unsigned int> score_list) {
    int result{-1};

    for (unsigned int k = 0; k < name_list.size(); ++k) {
        if (name == name_list[k])
            result = score_list[k];
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

    std::string target_name{" "};

    if (names.size() == 0) {
        std::cout << "入力されたデータはありませんでした。\n";
    } else {
        std::cout << "名前を入力してスコアを取得します。名前を入力してください."
                     "..\n>> ";
        cin >> target_name;
        if (get_score(target_name, names, scores) == -1)
            std::cout << "name not found\n";
        else
            std::cout << target_name << "さんのスコアは "
                      << get_score(target_name, names, scores) << " です。\n";
    }

    return 0;
}