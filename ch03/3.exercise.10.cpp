#include "std_lib_facilities.h"

int main()
{
	string operation = { " " };
	double a = 0;
	double b = 0;

	cout << "演算子(+,-,*,/ || plus,minus,mul,div)を1つ入力し、それに続いて演算させたい2つの浮遊小数点数を入力してください。: ";
	cin >> operation >> a >> b;

	if (operation == "+" || operation == "plus")
		cout << a << " + " << b << " = " << a + b << endl;
	else if (operation == "-" || operation == "minus")
		cout << a << " - " << b << " = " << a - b << endl;
	else if (operation == "*" || operation == "mul")
		cout << a << " * " << b << " = " << a * b << endl;
	else if (operation == "/" || operation == "div")
		cout << a << " / " << b << " = " << a / b << endl;

	else
		cout << "演算子 \"" << operation << "\" は無効です。" << endl;

	return 0;
}