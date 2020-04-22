#include "../../std_lib_facilities.h"

double approximation_value = 1.0 / 100;

string near_equal(double val1, double val2, double approximation_value)
{
	if (abs(val1 - val2) < approximation_value)
		return string{ "the numbers are almost equal\n" };
	else
		return string{ "" };
}

int main()
{
	double val1{ 0 };
	double max{ 0 };			//最大値追跡用変数
	double min{ 0 };			//最小値追跡用変数
	char empty;
	int count{ 0 };			//何回目かをカウントするための変数
	constexpr char end_mark = '|';
	string user_prompt = { "Enter valid a floating point number, " + string{end_mark} +" to exit: --->" };

	cout << user_prompt << '\n';
	while (cin >> empty && empty != end_mark) {
		cin.putback(empty);
		if (cin >> val1) {				//27行から46行を書き換え
			if (count == 0) {
				cout << val1 << " the smallest and largest so far\n";
				max = val1;
				min = val1;
			}
			else if (count > 0) {
				if (val1 <= min) {
					cout << val1 << " the smallest so far\n";
					min = val1;
				}
				else if (val1 >= max) {
					cout << val1 << " the largest so far\n";
					max = val1;
				}
			}
			else {
				break;
			}
			++count;				//ここまで
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

６	ループ本体を書き換え，double　型の値を一度に1つずつ読み込むように変更する．これまでに読み込んだ値のうち最も大きい値と最も小さい値を追跡するための
	2つの変数を定義する．ループを繰り返すたびに，入力された値をかき出す．その値がそれまでに入力された中で最も小さい場合は数字に続いて"the smallest 
	so far"を書き出し，最も大きい場合は数字に続いて"the largest so far"を書き出す．⏎
*/
