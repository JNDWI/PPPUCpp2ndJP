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
		cin.putback(empty);
		if (cin >> val1 >> val2) {
			if (val1 < val2) {			//val1がval2より小さい場合
				cout << "the smallest value is: " << val1 << '\n'
					<< "the largest value is : " << val2 << '\n';
			}
			else {			//それ以外の場合(val==val2含め)
				cout << "the smallest value is: " << val2 << '\n'
					<< "the largest value is : " << val1 << '\n';
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
*/
