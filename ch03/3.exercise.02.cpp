#include "std_lib_facilities.h"

int main()
{
	double mile_input = 0;
	cout << "キロメートル単位に変換したいマイル数を入力してください。: ";
	cin >> mile_input;
	cout << mile_input << "マイルは " << mile_input * 1.609 << "キロメートルです。\n";

	return 0;
}