#include "../../std_lib_facilities.h"

double CM_M_CONV_RATIO = 1.0 / 100;			//近似値の範囲を設定

string near_equal(double val1, double val2,double CM_M_CONV_RATIO)			//2つの値の差が0.01未満の場合出力を変える関数
{
	if (abs(val1 - val2) < CM_M_CONV_RATIO)			//abs関数(p1156)      //val1とval2の差の絶対値が1.0/100より小さい場合
		return string{ "the numbers are almost equal\n" };
	else			//それ以外の場合
		return string{ "" };
}

int main()
{
	double val1{ 0 };
	double val2{ 0 };
	char empty;
	constexpr char end_mark = '|';
	string user_prompt = { "Enter valid 2 floating point numbers, " + string{end_mark} +" to exit: --->" };

	cout << user_prompt << '\n';
	while (cin >> empty && empty != end_mark) {
		cin.putback(empty);
		if (cin >> val1 >> val2) {
			if (val1 < val2) {
				cout << "the smallest value is: " << val1 << '\n'
					<< "the largest value is : " << val2 << '\n'
					<< near_equal(val1, val2, CM_M_CONV_RATIO);			//関数使用
			}
			else if (val1 == val2) {
				cout << "the numbers are equal\n";
			}
			else {
				cout << "the smallest value is: " << val2 << '\n'
					<< "the largest value is : " << val1 << '\n'
					<< near_equal(val1, val2, CM_M_CONV_RATIO);			//関数使用
			}
		}
		else if (cin >> empty && empty == end_mark) {
			break;
		}
		cout << user_prompt << '\n';
	}
}

/*
１	whileループで構成されたプログラムを作成する．whileループではループを繰り返すたびに int 型の値を2つ読み込み，それらを出力する．
	'|'が入力されたらプログラムを終了する．⏎
２	"the smallest value is: "に続いて小さいほうの数字をかき出し，"the larger value is: "に続いて大きいほうの値を書き出すように変更する．⏎
３	2つの数字が等しい場合に（のみ），"the numbers are equal"行をかき出すように変更する．⏎
４	int の代わりに doubleを使用するように変更する．⏎
５	2つの数字の差が1.0/100見なんである場合に，どちらの数字が大きいかをかき出した後，"the numbers is almost equal"と書き出すように変更する．⏎
*/
