#include "../../std_lib_facilities.h"

int main()
{
	int x;  //整数値用の変数を定義
	cout << "Please enter integer value: ";  //prompt
	cin >> x;
	if (x % 2 == 1) {  //余りが1出た場合
		cout << "値" << x << "は奇数である";
	}
	if (x % 2 == 0) {  //余りが出なかった場合
		cout << "値" << x << "は偶数である";
	}
}