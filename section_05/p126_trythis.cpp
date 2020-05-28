#include "../../std_lib_facilities.h"

int area(int length, int width)
{
	return length * width;
}

int main()
{
	cout << "これらの例をコンパイルし，コンパイラーがどのように反応するか各印する．自分でもエラーをいくつか考えて，それらも試してみる．\n"
		<< "下のコメントにエラーを書いた．オリジナルのエラーは x3 に記してある．\n";
}

/*
int x0 = arena(7);
	識別子"arena"が定義されていません
int x1 = area(7);
	関数呼び出しの引数が少なすぎます
int x2 = area("seven",2);
	型"const char"の引数は型"int"のパラメーターと互換性がありません

int x3 = area(1000000000000000000000000000000000000000000,3); 
	整数定数が大きすぎます
*/