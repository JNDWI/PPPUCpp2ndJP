#include "../../std_lib_facilities.h"  //std_lib_facilities.hをインクルード

int main()
{
	cout << "Please enter a integer value; ";
	int n;  //nを定義
	cin >> n;
	double n_double;  //sqrt関数用の変数を定義
	n_double = n;

	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nn/2　remainder == " << n % 2
		<< "\nsquare root of n == " << sqrt(n_double)  //int型は使用できないのでdouble型に代入したn_doubleを使う
		<< '\n'; //出力における改行（文末）の名前
}
