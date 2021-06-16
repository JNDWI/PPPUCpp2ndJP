#include "std_lib_facilities.h"

int Main()
{
	STRING s = "Goodbye, cruel world! ";
	cOut << S << '\n';

	return 0;
}

/*
1>------ ビルド開始: プロジェクト: 3.7.trythis.errormassage, 構成: Debug Win32 ------
1>3.7.trythis.errormassage.cpp
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.7.trythis.errormassage\3.7.trythis.errormassage.cpp(5): error C2065: 'STRING': 定義されていない識別子です。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.7.trythis.errormassage\3.7.trythis.errormassage.cpp(5): error C2146: 構文エラー: ';' が、識別子 's' の前に必要です。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.7.trythis.errormassage\3.7.trythis.errormassage.cpp(5): error C2065: 's': 定義されていない識別子です。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.7.trythis.errormassage\3.7.trythis.errormassage.cpp(6): error C2065: 'cOut': 定義されていない識別子です。
1>c:\users\nashy\source\repos\pppucpp2ndjp\ch03\3.7.trythis.errormassage\3.7.trythis.errormassage.cpp(6): error C2065: 'S': 定義されていない識別子です。
1>プロジェクト "3.7.trythis.errormassage.vcxproj" のビルドが終了しました -- 失敗。
========== ビルド: 0 正常終了、1 失敗、0 更新不要、0 スキップ ==========

※ Visual Studio 2017 環境下
*/

/*
正しくは下の通り

int main()
{
string s = "Goodbye, cruel world! ";
cout << s << '\n";
}
*/