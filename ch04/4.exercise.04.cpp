#include "std_lib_facilities.h"

int MIN{ 1 };
int MAX{ 100 };
int COUNT{ 0 };

bool guess(int min, int max)
{
	char y_or_n{ ' ' };

	if (max - min == 1) {
		++COUNT;
		cout << COUNT << "回目:";
		cout << "あなたが思い浮かべた数字は \"" << min << "\" ですか？(y or n) >> ";
		cin >> y_or_n;
		if (y_or_n == 'y') {
			cout << "\nあなたが思い浮かべた数字は \"" << min << "\" ですね。\n";
			return true;
		}
		else if (y_or_n == 'n') {
			cout << "\nあなたが思い浮かべた数字は \"" << max << "\" ですね。\n";
			return true;
		}
		else {
			cout << "無効な値です。";
			return false;
		}
	}
	else if (min != max) {
		++COUNT;
		cout << COUNT << "回目:";
		cout << "あなたが思い浮かべた数字は \"" << min << "\" 以上、 \"" << (min + max) / 2 << "\" 以下ですか？(y or n) >> ";
		cin >> y_or_n;
		if (y_or_n == 'y') {
			MAX = (min + max) / 2;
			return false;
		}
		else if (y_or_n == 'n') {
			MIN = (min + max) / 2 + 1;
			return false;
		}
		else {
			cout << "無効な値です。";
			return false;
		}
	}
	else if (min == max) {
		cout << "\nあなたが思い浮かべた数字は \"" << max << "\" ですね。\n";
		return true;
	}
	else
		cout << "想定外のエラーです。\n"; return false;
}

int main()
{
	cout << "1から100までの数字を一つ思い浮かべてください。\n";

	while (guess(MIN,MAX) != true) {
		guess(MIN, MAX);
	}

	return 0;
}