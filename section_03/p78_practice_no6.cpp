#include "../../std_lib_facilities.h"

int main()
{
	int a, b, c;  //ユーザーに入力させる整数値用の変数を3つ定義
	int x;  //オブジェクト内の値を一時保存する変数を定義
	cout << "Please enter 3 integer value: ";
	while (cin >> a >> b >> c) {
		if (a > b) {
			x = a;  //aがbより値が大きい場合入れ替える(手順1)
			a = b;
			b = x;
		}
		if (b > c) {
			x = b;  //bがcより値が大きい場合入れ替える(手順2)
			b = c;
			c = x;
		}
		if (a > b) {
			x = a;  //aがbより値が大きい場合入れ替える(手順2で入れ替えた際ｂが入れ替え済みのaより値が小さい場合があるので再度行う)
			a = b;
			b = x;
		}
		cout << a << ',' << b << ',' << c << '\n'<<"Ctrl + zと入力しEnterで終了する\n";
	}
}