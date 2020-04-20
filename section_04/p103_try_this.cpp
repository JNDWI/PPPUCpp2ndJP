//p101_try_this.cpp の内容をfor文で書き換える．
#include "../../std_lib_facilities.h"

int main()
{
	for (char roop = 'a'; roop < 'z' + 1; ++roop)
		cout << roop << '\t' << int(roop) << '\n';
}