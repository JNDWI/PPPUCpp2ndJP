#include "../../std_lib_facilities.h"  //std_lib_facilities.hをインクルード

int main()
{
	double age;  //年齢変数を定義
	double age_moon;  //月齢用の変数を定義
	cout << "Input your age: ";  //年齢を入力するようにprompt
	cin >> age;
	age_moon = age * 12;  //月齢を計算し代入
	cout << age_moon << " months old. \n";  //月齢を出力
}
