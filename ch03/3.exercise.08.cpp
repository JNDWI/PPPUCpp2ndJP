#include "std_lib_facilities.h"

int main()
{
	int number = 0;

	cout << "整数値をひとつ入力してください。: ";
	cin >> number;

	if (number % 2 == 0)
		cout << number << " は偶数である。" << endl;
	else
		cout << number << " は奇数である。" << endl;

	return 0;
}