#include "../../std_lib_facilities.h"

constexpr double approximation_value = 1.0 / 100;
constexpr double CM_M_RAITO = 1.0 / 100;
constexpr double IN_M_RAITO = 2.54*CM_M_RAITO;
constexpr double FT_M_RAITO = 12.0*IN_M_RAITO;
const vector<string> valid_unit = { "cm","m","in","ft" };

string near_equal(double val1, double val2, double approximation_value)
{
	if (abs(val1 - val2) < approximation_value)
		return string{ "the numbers are almost equal\n" };
	else
		return string{ "" };
}

int block_invalid_unit(vector<string> valid_unit, string dist_unit)
{
	for (int i = 0; i < valid_unit.size(); ++i) {
		if (dist_unit == valid_unit[i])
			return 0;
	}
	return 1;
}

double conv_meter(double val1, string dist_unit)			//メートル変換関数
{
	double mts;

	if (dist_unit == "cm")
		mts = val1 * CM_M_RAITO;
	else if (dist_unit == "in")
		mts = val1 * IN_M_RAITO;
	else if (dist_unit == "ft")
		mts = val1 * FT_M_RAITO;
	else
		mts = val1;

		return mts;
}

int main()
{
	int count{ 0 };
	double val1{ 0 };
	double max{ 0 };
	double min{ 0 };
	double total{ 0 };			//値の合計
	double number{ 0 };			//値の個数
	double mts;					//メートル表記
	char empty;
	constexpr char end_mark = '|';
	string dist_unit{};
	string user_prompt = { "Enter valid a floating point number and distance unit, " + string{end_mark} +" to exit: --->" };

	cout << user_prompt << '\n';
	while (cin >> empty && empty != end_mark) {
		cin.putback(empty);
		if (cin >> val1 >> dist_unit) {
			if (0 == block_invalid_unit(valid_unit, dist_unit)) {
				mts = conv_meter(val1, dist_unit);
				if (count == 0) {
					cout << val1 <<dist_unit<<"("<<mts<<"m)"<<" the smallest and largest so far\n";
					max = mts;
					min = mts;
				}
				else if (count > 0) {
					if (mts <= min) {
						cout << val1 << dist_unit << "(" << mts << "m)" << " the smallest so far\n";
						min = mts;
					}
					else if (mts >= max) {
						cout << val1 << dist_unit << "(" << mts << "m)" << " the largest so far\n";
						max = mts;
					}
				}
				else {
					break;
				}
				++count;
				total += mts;
				++number;
			}
			else if (1 == block_invalid_unit(valid_unit, dist_unit))
				cout << "INVALID VALUE!!!\n";
		}
		else if (cin >> empty && empty == end_mark) {
			break;
		}
		cout << user_prompt << '\n';
	}
	cout << min << " が最小値\n"
		<< max << " が最大値\n"
		<< count << " が値の個数\n"
		<< total << "m" << " が値の合計\n\n";
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

９	（最小値と最大値に加えて）入力された値の合計と入力された値の個数を追跡する．ループが終了したら，最小値，最大値，値の個数，値の合計を出力する．
	合計を管理するには，その合計に使用する単位を決定しなければならないことに注意．ここではメートルを使用する．
*/