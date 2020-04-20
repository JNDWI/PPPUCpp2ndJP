// p95_try_this.cppの内容をswitch文を使用し書き換える．

/* 2020/04/11 のデータを基に変換プログラムを作成しています
1ドル = 108.40円 = 0.91ユーロ = 0.80ポンド(スターリング・ポンド)
data by Google.com */
#include "../../std_lib_facilities.h"

int main()
{
	constexpr double dollar_per_yen = 108.40;  //各通貨を変換するための定数を定義
	constexpr double dollar_per_euro = 0.91;
	constexpr double dollar_per_pound = 0.80;
	double value = 1;  //通貨の値を入力するための変数を定義
	char unit = ' ';
	cout << "通貨の値を入力してください．\n円からドルの場合は続いて「Y」，ユーロからは「E]，ポンドからは「P」と入力してください．";
	cin >> value >> unit;

	switch (unit) {
	case 'Y':
		cout << value << "円は," << value / dollar_per_yen << "ドルです．\n";
		break;
	case 'E':
		cout << value << "ユーロは," << value / dollar_per_euro << "ドルです．\n";
		break;
	case 'P':
		cout << value << "ポンドは," << value / dollar_per_pound << "ドルです．\n";
		break;
	default:
		cout << "その通貨は対応していません．\n";
		break;
	}
}
