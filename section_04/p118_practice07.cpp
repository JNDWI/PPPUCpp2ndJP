#include "../../std_lib_facilities.h"

const vector <string>numbers = { "zero","one","two","three","four","five","six","seven","eight","nine" };


double calculator(double val1, double val2, char op)
{
	if (op == '+')
		return val1 + val2;
	else if (op == '-')
		return val1 - val2;
	else if (op == '*')
		return val1 * val2;
	else if (op == '/')
		return val1 / val2;
	else
		return 0;
}

double fun(vector<string>numbers, string str)
{
	for (int i = 0; i < numbers.size(); ++i) {
		if (str == numbers[i])
			return i;
	}
	return atof(str.c_str());		//atof (p1164) : c_str() (p828)
}

int main()
{
	string str1, str2;
	double val1, val2;
	char op;

	cout << "四則演算させたい二つの値と演算子を入力してください\n例:36 / 12\n-->";
	cin >> str1 >> op >> str2;

	val1 = fun(numbers,str1);
	val2 = fun(numbers,str2);

	cout << '\n' << val1 << " " << op << " " << val2 << " = " << calculator(val1, val2, op);
}