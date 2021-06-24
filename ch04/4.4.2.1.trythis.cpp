#include "std_lib_facilities.h"

int main()
{
	char character = { 'a' };

	cout << "char\t" << "int" << endl;
	while (character <= 'z') {
		cout << character << "\t" << int(character) << endl;
		++character;
	}

	return 0;
}