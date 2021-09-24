#include "../include/std_lib_facilities.h"

int
main()
{
    // 定義 & 初期化
    std::string first_name = { " " };
    int age = -1;
    std::string friend_name = { " " };
    char friend_gender = { '0' };

    // プロンプト
    std::cout << "Enter the name of the person you want to write to (followed "
                 "by 'enter'): "; // 手紙の送り先
    std::cin >> first_name;
    std::cout << "Enter the age of this person: "; // 送り先の人の年齢を入力
    std::cin >> age;
    if (age <= 0 || age >= 110) { // 0歳以下又は110歳以上の場合エラーを出力
        simple_error("you're kidding!");
    }
    std::cout << "Enter the name of a friend: "; //　友達の名前を入力
    std::cin >> friend_name;
    std::cout
      << "Enter friend's sex (m for male, f for female): "; // 友達の性別を入力
    std::cin >> friend_gender;

    // 出力
    std::cout << "Dear " << first_name << ",\n"
              << "\nHow are you? I am fine. I miss you. ";

    std::cout << "Have you seen " << friend_name << " lately?"
              << "If you see " << friend_name << " please ask ";
    if (friend_gender == 'm') {
        std::cout << "him ";
    }
    if (friend_gender == 'f') {
        std::cout << "her ";
    }
    std::cout << "to call me.\n";

    std::cout << "I hear you just had a birthday and you are " << age
              << " years old.\n";
    if (age < 12) {
        std::cout << "Next year you will be " << age + 1 << ".\n";
    }
    if (age == 17) {
        std::cout << "Next year you will be able to vote.\n";
    }
    if (age >= 70) {
        std::cout << "I hope you are enjoying retirement.\n";
    }

    std::cout << "\nYour sincerely,"
              << "\n\n\t\t\tn.Nashy\n\n";

    return 0;
}