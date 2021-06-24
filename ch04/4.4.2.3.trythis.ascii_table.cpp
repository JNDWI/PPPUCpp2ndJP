#include "std_lib_facilities.h"

int main()
{
	cout << "char\tint" << endl;

	for (char small = { 'a' }; small <= 'z'; ++small)
		cout << small << '\t' << int(small) << endl;

	for (char capital = { 'A' }; capital <= 'Z'; ++capital)
		cout << capital << '\t' << int(capital) << endl;

	for (char number = { '0' }; number <= '9'; ++number)
		cout << number << '\t' << int(number) << endl;

	return 0;
}