#include "../../std_lib_facilities.h"

int main()
{
	int val1{ 0 };
	int val2{ 0 };
	char empty;
	constexpr char end_mark = '|';
	string user_prompt = { "Enter valid 2 int number, " + string{end_mark} +" to exit: --->" };

	cout << user_prompt << '\n';
	while (cin >> empty && empty != end_mark) {
		cin.putback(empty);			// empty をストリームに戻し，次に読み込む文字にする(p1146を参照)
		if (cin >> val1 >> val2) {			//整数を二つ入力した場合
			cout << "Entered number is " << val1 << ' ' << val2 << '\n';
		}
		else if (cin >> empty && empty==end_mark) {			//終了マークを入力した場合
			break;
		}
		cout << user_prompt << '\n';
	}
}

/*
１	whileループで構成されたプログラムを作成する．whileループではループを繰り返すたびに int 型の値を2つ読み込み，それらを出力する．
	'|'が入力されたらプログラムを終了する．⏎
*/
