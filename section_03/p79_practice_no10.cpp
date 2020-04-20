#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please write operation ( + or plus , - or minus , * or mul , / or div): \nFollowed by two numbers: ";
	string op = " ";
	double a, b;
	cin >> op >> a >> b;

	if (op == "+" || op == "plus")
		cout << a << "+" << b << " = " << a + b;
	else if (op == "-" || op == "minus")
		cout << a << "-" << b << " = " << a - b;
	else if (op == "*" || op == "mul")
		cout << a << "*" << b << " = " << a * b;
	else if (op == "/" || op == "div")
		cout << a << "/" << b << " = " << a / b;
}