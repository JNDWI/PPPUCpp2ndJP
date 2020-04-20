#include "../../std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string first_name;																			//definition first name variable
	cin >> first_name;																			//input first name
	cout << "Dear " << first_name << ",\n"
		<< "How are you? I am fine. I miss you. " << '\n';

	string friend_name;																			//definition friend name variable
	cout << "Input friend name ";
	cin >> friend_name;																			//input friend name
	cout << "Have you seen " << friend_name << " lately?\n";
	char friend_gender = '0';																	//definition gender variable

	cout << "Input your frined gender: man ---> type \"m\" , female ---> type \"f\"";
	cin >> friend_gender;

	if (friend_gender == 'm')																//if m & f
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	if (friend_gender == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";


	cout << "Input frined age: ";
	int age;																					//definition age variable
	cin >> age;																					//input age

	if (age <= 0 || age >= 120)
		simple_error("you're kidding!");
	if (age < 12)
		cout << "Next year you will be " << ++age;
	if (age == 17)
		cout << "Next year you will be able to vote.";
	if (age >= 70)
		cout << "I hope you are enjoying retirement";

	cout << "\nYours sincerely\n\n" << "Jin";
}
