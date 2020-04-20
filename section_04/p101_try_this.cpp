#include "../../std_lib_facilities.h"

int main()
{
	char roop ='a';
	while (roop < 'z'+1)
	{
		cout << roop << '\t' << int(roop) << '\n';
		++roop;
	}
}