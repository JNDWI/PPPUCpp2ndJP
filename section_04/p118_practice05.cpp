#include "../../std_lib_facilities.h"

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

int main()
{
	double val1, val2;
	char op;

	cout << "四則演算させたい二つの値と演算子を入力してください\n例:36 / 12\n-->";
	cin >> val1 >> op >> val2;
	cout <<'\n'<< val1 << " " << op << " " << val2 << " = " << calculator(val1, val2, op);
}