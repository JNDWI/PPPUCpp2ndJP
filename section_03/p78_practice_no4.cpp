#include "../../std_lib_facilities.h"

int main()
{
	int val1, val2;  //xを代入する変数を定義
	cout << "Please enter integer value: ";
	cin >> val1 >> val2;
	//val1とval2の最大最小値を求める
	int max, min;
	max = val1;
	if (val1 < val2) {
		max = val2;
	}
	min = val1;
	if (val1 > val2) {
		min = val2;
	}
	cout << "max == " << max;
	cout << "\nmin == " << min;

	//合計，差，積，比率を求める
	cout << "\n合計 == " << val1 + val2
		<< "\n差 == " << val1 - val2
		<< "\n積 == " << val1 * val2
		<< "\nval1 : val2 == " << val1/val1 << " : " << val2/val1 << '\n';
}