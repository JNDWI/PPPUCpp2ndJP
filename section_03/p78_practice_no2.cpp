#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter the distance in mileage notation: ";
	double mile, kilo;  //変数を定義
	cin >> mile;
	kilo = mile * 1.609;  //マイルをキロ表記に変換
	cout << mile << " miles is " << kilo << " kilometers.\n\n";
}