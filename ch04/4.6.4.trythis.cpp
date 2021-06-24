#include "std_lib_facilities.h"

int main()
{
	const vector<string> disliked = { "Broccoli","Tomato","Cucumber" };
	string word { "" };
	bool disliking { false };

	while (cin >> word) {
		for (int i = 0; i < disliked.size(); ++i) {
			if (word == disliked[i])
				disliking = true;
			else;
		}
		if (disliking)
			cout << "BLEEP" << endl;
		else
			cout << word << endl;
	}

	return 0;
}