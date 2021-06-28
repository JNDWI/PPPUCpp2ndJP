#include "std_lib_facilities.h"

int main()
{
	double val1{ 0 };
	double val2{ 0 };
	char oper{ ' ' };

	cout << "電卓..." << endl;
	cout << "2つのdouble値と演算子を1つ入力してください。(+,-,*,/) >> ";

	while (cin >> val1 >> val2 >> oper) {
		switch (oper)
		{
		case '+':
			cout << "The sum of " << val1 << " and " << val2 << " is "
				<< val1 + val2 << endl;
			break;
		case '-':
			cout << "The difference of " << val1 << " and " << val2 << " is "
				<< val1 - val2 << endl;
			break;
		case '*':
			cout << "The product of " << val1 << " and " << val2 << " is "
				<< val1 * val2 << endl;
			break;
		case '/':
			if (val2 == 0)
				cout << "ERROR: Division by zero\n";
			else
				cout << "The division of " << val1 << " and " << val2 << " is "
				<< val1 / val2 << endl;
			break;
		default:
			break;
		}
		cout << ">> ";
	}

	return 0;
}