#include "std_lib_facilities.h"

int main()
{
	// 定義 & 初期化
	string first_name = { " " };
	int age = -1;
	string friend_name = { " " };
	char friend_gender = { '0' };

	// プロンプト
	cout << "Enter the name of the person you want to write to (followed by 'enter'): ";	// 手紙の送り先
	cin >> first_name;
	cout << "Enter the age of this person: ";	// 送り先の人の年齢を入力
	cin >> age;	
	if (age <= 0 || age >= 110) {	// 0歳以下又は110歳以上の場合エラーを出力
		simple_error("you're kidding!");
	}
	cout << "Enter the name of a friend: ";	//　友達の名前を入力
	cin >> friend_name;
	cout << "Enter friend's sex (m for male, f for female): ";	// 友達の性別を入力
	cin >> friend_gender;

	// 出力
	cout << "Dear " << first_name << ",\n"
		<< "\nHow are you? I am fine. I miss you. ";
	
	cout << "Have you seen " << friend_name << " lately?"
		<< "If you see " << friend_name << " please ask ";
	if (friend_gender == 'm') {	
		cout << "him ";
	}
	if (friend_gender == 'f') {
		cout << "her ";
	}
	cout << "to call me.\n";
	
	cout << "I hear you just had a birthday and you are " << age << " years old.\n";
	if (age < 12) {
		cout << "Next year you will be " << age + 1 << ".\n";
	}
	if (age == 17) {
		cout << "Next year you will be able to vote.\n";
	}
	if (age >= 70) {
		cout << "I hope you are enjoying retirement.\n";
	}

	cout << "\nYour sincerely," << "\n\n\t\t\tn.Nashy\n\n";

	return 0;
}