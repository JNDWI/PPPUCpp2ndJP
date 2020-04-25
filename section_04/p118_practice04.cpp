#include "../../std_lib_facilities.h"

int main()
{
	int min{ 0 };
	int max{ 100 };
	int forecast;
	int count{ 0 };
	char y_n;

	cout << min << " から " << max << " の範囲から一つだけ数字を思い浮かべてください...";

	while (min != max) {

		if (max - min == 1)
			forecast = max;
		else
			forecast = (min + max) / 2;

		cout << "\nあなたが思い浮かべている数字は " << forecast << " 以上ですか?  y/n  --->";
		cin >> y_n;

		if (y_n == 'y') {
			min = forecast;
			++count;
		}
		else if (y_n == 'n') {
			max = forecast - 1;
			++count;
		}
		else
			cout << "\n無効な値が入力されました．";
	}

	cout << "\n\nあなたが思い浮かべた数字は " << max << " ですね．"
		<< "\n質問した回数は " << count << " 回　です．\n";
}