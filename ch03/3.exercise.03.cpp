#include "std_lib_facilities.h"

int main()
{
	int uno;
	int alignas;
	int double = 0;
	char _error;
	string delete;

	return 0;
}

/* コンパイル（Visual Studio Community 2017 環境下）

1>------ ビルド開始: プロジェクト: 3.exercise.03, 構成: Debug Win32 ------
1>3.exercise.03.cpp
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.exercise.03\3.exercise.03.cpp(6): error C2054: ';' の後に '(' が必要です。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.exercise.03\3.exercise.03.cpp(6): warning C4091: '': 変数が何も宣言されていないときは、'int' の左辺を無視します。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.exercise.03\3.exercise.03.cpp(7): error C2632: 'int' と 'double' の 2 つの型指定子のあいだにコードがありません。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.exercise.03\3.exercise.03.cpp(7): error C2513: 'int': 指定された型は、識別子の名前を指定せずに宣言されています。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.exercise.03\3.exercise.03.cpp(9): error C2059: 構文エラー: 'delete'
1>プロジェクト "3.exercise.03.vcxproj" のビルドが終了しました -- 失敗。
========== ビルド: 0 正常終了、1 失敗、0 更新不要、0 スキップ ==========
*/