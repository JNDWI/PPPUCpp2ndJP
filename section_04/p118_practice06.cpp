#include "../../std_lib_facilities.h"

int eng(vector<string>numbers, string en_num)
{
	for (int i = 0; i < numbers.size(); ++i) {
		if (en_num == numbers[i])
			return i;
	}
	return 404;
}

int main()
{
	int al_num;
	string en_num;
	vector <string>numbers = { "zero","one","two","three","four","five","six","seven","eight","nine" };

	cout << "アラビア数字を一文字入力してください．英語スペルを出力します ---> ";
	cin >> al_num;
	cout << numbers[al_num] << '\n';

	cout << "英語スペルで0から9の数字を書いてください．アラビア数字を出力します ---> ";
	cin >> en_num;
	cout << eng(numbers, en_num);
}