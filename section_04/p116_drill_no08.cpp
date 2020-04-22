#include "../../std_lib_facilities.h"

constexpr double approximation_value = 1.0 / 100;
constexpr double CM_M_RAITO = 1.0 / 100;
constexpr double CM_IN_RAITO = 1.0 / 2.54;
constexpr double IN_FT_RAITO = 1.0 / 12;
const vector<string> valid_unit = { "cm","m","in","ft" };			//有効な距離単位

string near_equal(double val1, double val2, double approximation_value)
{
	if (abs(val1 - val2) < approximation_value)
		return string{ "the numbers are almost equal\n" };
	else
		return string{ "" };
}

int block_invalid_unit(vector<string> valid_unit, string dist_unit )
{
	for (int i = 0; valid_unit.size(); ++i) {
		if (dist_unit == valid_unit[i])
			return 0;
	}
	return 1;
}

int main()
{
	double val1{ 0 };
	double max{ 0 };
	double min{ 0 };
	string dist_unit{};
	char empty;
	int count{ 0 };
	constexpr char end_mark = '|';
	string user_prompt = { "Enter valid a floating point number and distance unit, " + string{end_mark} +" to exit: --->" };

	cout << user_prompt << '\n';
	while (cin >> empty && empty != end_mark) {
		cin.putback(empty);
		if (cin >> val1 >> dist_unit) {			//dist_unitを追加
			if (0 == block_invalid_unit(valid_unit, dist_unit)) {
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
				++count;
			}
			else
				cout << "INVALID VALUE!!!\n";
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
７	入力された double　型の値に単位を追加する．つまり，10cm,2.5in,5fn,3.33mなどの値を入力する．単位として受け入れるのは，cm,m,in,fn　の4つであり，
	換算率を1m == 100cm，1in == 2.54cm,1ft == 12in　とする．単位記号は文字列に読み込む．12 m（数字と単位の間にスペースがある）については，
	12m　と同等と考えてよい．⏎

８	単位のない値，または単位の表記が「無効」である値（y,yard,meter,km,gallons　など）を拒否する．
*/