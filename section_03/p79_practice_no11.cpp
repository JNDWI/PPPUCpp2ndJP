#include "../../std_lib_facilities.h"

int main()
{
	int penny, nickel, dime, quarter, half_dollar, dollar;  //各硬貨用の変数を定義
	int total = 0;  //合計用の変数を定義
	string how = "How many ";  //繰り返し文章打つのめんどくさいので定義します
	string have = " do you have: ";  //上に同じく

	cout << how << "pennies" << have;  //硬貨枚数を入力する
	cin >> penny;
	cout << '\n' << how << "nickel" << have;
	cin >> nickel;
	cout << '\n' << how << "dimes" << have;
	cin >> dime;
	cout << '\n' << how << "quarters" << have;
	cin >> quarter;
	cout << '\n' << how << "half_dollar" << have;
	cin >> half_dollar;
	cout << '\n' << how << "dollars" << have;
	cin >> dollar;

	total = penny + nickel * 5 + dime * 10 + quarter * 25 + half_dollar * 50 + dollar * 100;  //合計金額を出す

	//出力する
	cout << "You have " << penny << " pennies.\n"
		<< "You have " << nickel << " nickels.\n"
		<< "You have " << dime << " dimes.\n"
		<< "You have " << quarter << " quarters.\n"
		<< "You have " << half_dollar << " half dollars.\n"
		<< "You have " << dollar << " dollars.\n"
		<< "The value of all of your coins is " << total << " cents.\n"  //セントのみで表示する
		<< "The value of all of your coins is " << total / 100 << " dollars " << total % 100 << " cents.\n";  //ドルとセントで分けて出力する

}
