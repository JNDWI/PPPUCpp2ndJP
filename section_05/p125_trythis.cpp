#include "../../std_lib_facilities.h"

int area(int length, int width) //四角形の面積を計算
{
	return length * width;
}

int main()
{
	cout << "これらの例をコンパイルし，コンパイラーがどのように報告するか確認する．\n"
		<< "下のコメントに各文のエラーを表示した．\n";

	//実行環境　Visual Studio Community 2017 on Windows10
}

/*
int s1 = area(7;
	')' が必要です

int s2 = area(7)
	関数呼び出しの引数が少なすぎます
	';'が必要です

Int s3 = area(7);
	関数呼び出しの引数が少なすぎます
	識別子"Int"が定義されていません．

int s4 = area('7);
	終わり引用符がありません
	')'が必要です
*/


//実行環境　Visual Studio Community 2017 on Windows10