// 問題文：
//  練習問題１９のプログラムを書き換え、整数を入力したらそのスコアを持つすべての名前を出力するか、
//  "score not found" を出力するように変更する。
//
// コメント：
//  なぜか名前を出力するところで動かなかったので、一番下にコードをメモとして記録しておく。

#include "../include/std_lib_facilities.h"

vector<std::string> names;
vector<unsigned int> scores;
vector<std::string> target_names;

bool scrutinize_names(std::string input_name, vector<std::string> name_list) {
    bool result{true};

    for (unsigned int i = 0; i < name_list.size(); ++i) {
        if (name_list[i] == input_name)
            result = false;
    }

    return result;
}

void get_name(unsigned int score) {
    for (unsigned int k = 0; k < scores.size(); ++k) {
        if (score == scores[k])
            target_names.push_back(names[k]);
    }
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
                          << " はすでに使用されています。\nデータ入力を終了しま"
                             "す...\n";
                quit = true;
            } else {
                names.push_back(name);
                scores.push_back(score);
                std::cout << ">> ";
            }
        }
    }

    unsigned int target_score{0};

    if (names.empty()) {
        std::cout << "入力されたデータはありませんでした。\n";
    } else {
        std::cout << "スコアを入力し、そのスコアを持つすべての名前を出力します"
                     "。スコアを入力してください...\n>> ";
        std::cin >> target_score;
        get_name(target_score);
        if (target_names.empty())
            std::cout << "score not found\n";
        else {
            std::cout << "入力されたスコアを持つ名前が見つかりました。以下に出"
                         "力します...\n";
            for (unsigned int l = 0; l < target_names.size(); ++l) {
                std::cout << target_names[l] << '\n';
            }
        }
    }

    return 0;
}

/*
#include "../include/std_lib_facilities.h"

vector<std::string> names;
vector<unsigned int> scores;

bool scrutinize_names(std::string input_name, vector<std::string> name_list)
{
    bool result{true};

    for (unsigned int i = 0; i < name_list.size(); ++i) {
        if (name_list[i] == input_name)
            result = false;
    }

    return result;
}

void get_name(unsigned int score, vector<unsigned int> score_list,
vector<std::string> name_list, vector<std::string> target_names)
{
    for (unsigned int k = 0; k < score_list.size(); ++k) {
        if (score == score_list[k])
            target_names.push_back(name_list[k]);
    }
}

int main()
{
    std::string name{"NoName"};
    unsigned int score{0};
    bool quit{false};

    std::cout << "名前とスコアを入力し、出力するプログラムです。\n名前に
\"NoName\"、又はスコアを0と入力するとプログラムは終了します。\n>> ";

    while (!quit && (cin >> name >> score)) {
        if (name == "NoName" || score == 0) {
            std::cout << "データ入力を終了します...\n";
            quit = true;
        } else {
            if (!scrutinize_names(name, names)) {
                std::cout << "ERROR: " << name << "
はすでに使用されています。\n"; quit = true; } else { names.push_back(name);
                scores.push_back(score);
                std::cout << ">> ";
            }
        }
    }

    unsigned int target_score{0};
    vector<std::string> target_names;

    if (names.size() == 0) {
        std::cout << "入力されたデータはありませんでした。\n";
    } else {
        std::cout <<
"スコアを入力し、そのスコアを持つすべての名前を出力します。スコアを入力してください...\n>>
"; std::cin >> target_score; get_name(target_score, scores, names,
target_names); if (target_names.size() == 0) std::cout << "score not found\n";
        else {
            std::cout <<
"入力されたスコアを持つ名前が見つかりました。以下に出力します...\n"; for
(unsigned int l = 0; l < target_names.size(); ++l) { std::cout <<
target_names[l] << '\n';
            }
        }
    }

    return 0;
}
 */