#include "std_lib_facilities.h"

int main()
{
	// 定義
	int penny = 0;
	int nickel = 0;
	int dime = 0;
	int quarter = 0;
	int half_dollar = 0;
	int dollar = 0;
	int total_cent = 0;

	// プロンプト
	cout << "How many pennies do you have?: ";
	cin >> penny;
	total_cent += penny;
	cout << "How many nickels do you have?: ";
	cin >> nickel;
	total_cent += nickel*5;
	cout << "How many dimes do you have?: ";
	cin >> dime;
	total_cent += dime*10;
	cout << "How many quarters do you have?: ";
	cin >> quarter;
	total_cent += quarter*25;
	cout << "How many half dollars do you have?: ";
	cin >> half_dollar;
	total_cent += half_dollar * 50;
	cout << "How many dollars do you have?: ";
	cin >> dollar;
	total_cent += dollar * 100;

	// 出力
	cout << endl << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

	if (penny == 1)
		cout << "You have " << penny << " penny." << endl;
	else if (penny != 0);
		cout << "You have " << penny << " pennies." << endl;

	if (nickel == 1)
		cout << "You have " << nickel << " nickel." << endl;
	else if (nickel != 0);
		cout << "You have " << nickel << " nickels." << endl;

	if (dime == 1)
		cout << "You have " << dime << " dime." << endl;
	else if (dime != 0)
		cout << "You have " << dime << " dimes." << endl;

	if (quarter == 1)
		cout << "You have " << quarter << " quarter." << endl;
	else if (quarter != 0)
		cout << "You have " << quarter << " quarters." << endl;

	if (half_dollar == 1)
		cout << "You have " << half_dollar << " half dollar." << endl;
	else if (half_dollar != 0)
		cout << "You have " << half_dollar << " half dollars." << endl;

	if (dollar == 1)
		cout << "You have " << half_dollar << " dollar." << endl;
	else if (dollar != 0)
		cout << "You have " << half_dollar << " dollars." << endl;

	cout << "The value of all of your coins is " << total_cent << " cents." << endl;

	return 0;
}