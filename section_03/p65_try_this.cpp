#include "../../std_lib_facilities.h"  //std_lib_facilities.hをインクルード

int main()
{
	string previous = " ";  //" "で初期化
	string current;
	while (cin >> current) {
		if (previous == current)
		cout << "repeated word: " << current << '\n';
		previous = current;
	}
}

/*お題
「単語重複プログラム」を実行し,"She she laughed He He He because what he did did not look very very good good"
という文章を使ってテストしてみる.重複する単語はいくつあったか．それはなぜか．
ここでの「単語」の定義は何か．「重複する単語」の定義は何か．たとえば"She she"は重複か．*/


/*結果 (Command Prompt)
She she laughed He He He because what he did did not look very very good good
repeated word : He
repeated word : He
repeated word : did
repeated word : very
repeated word : good */


/* She と she　は重複にカウントされない．
重複した単語は5つあった．
大文字と小文字は区別される．３つ同じ単語があると重複が2回検出される．
*/
