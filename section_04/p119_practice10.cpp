#include "../../std_lib_facilities.h"

const vector<string>hands = { "ぐー","ちょき","ぱー" };

int is_hand(string hand)
{
	for (string x : hands) {
		if (hand == x)
			return 1;
	}
	return 0;
}

int user_hand_conv(string hand)
{
	for (int y = 0; y < 3; ++y) {
		if (hands[y] == hand)
			return y;
	}
}

int win_or_lose(int cpu_hand, int i)
{
	if (abs(cpu_hand - i) == 1) {
		if (cpu_hand < i)
			return 0;
		else
			return 1;
	}
	else if (abs(cpu_hand - i) == 2) {
		if (cpu_hand > i)
			return 0;
		else
			return 1;
	}
	else
		return 2;
}

int main()
{
	string user_hand;
	int age;
	cout << "ぐー，ちょき，ぱーのいずれかの値を入力してください．\n---> ";
	while (cin >> user_hand && is_hand(user_hand) == 1) {
		cout << "\n貴方の年齢を整数で入力してください．\n---> ";
		cin >> age;
		int cpu_hand = rand() % 3 ;
		int i = user_hand_conv(user_hand);

		cout << "年齢を3で割った時のあまりでcpuの手がわかります．0がぐー，1がちょき，2がぱーです.\n";
		switch (win_or_lose(cpu_hand,i)) {
		case 0:
			cout << "コンピューターの勝利です．\n";
			break;
		case 1:
			cout << "あなたの勝利です．\n";
			break;
		case 2:
			cout << "あいこでした．\n";
			break;
		}
	}
}