/*嫌いな単語を書き換えるプログラムを作成する．*/

#include "../../std_lib_facilities.h"

int find_ng_words(const vector<string> disliked, string words)  //単語がNGワードかどうか評価する (0 or 1)
{
	for (int i = 0; i < disliked.size(); ++i) {
		if (words == disliked[i])
			return 0;  //嫌いなワードがあった場合は「0」を返す
	}
	return 1;  //嫌いなワードがなかった場合「1」を返す
}

int main()  //本体
{
	const vector<string>disliked = { "broccoli","peas","spinach" };  //嫌いな単語を定義する
	string words;
	cin >> words;
	switch (find_ng_words(disliked, words)) {  //関数から得た戻り値で場合分け
	case 0:
		cout << "BLEEP";
		break;
	case 1:
		cout << words;
		break;
	}
}
