#include "../include/std_lib_facilities.h"

int main() {
    const vector<std::string> disliked = {"Broccoli", "Tomato", "Cucumber"};
    std::string word{""};
    bool disliking{false};

    while (std::cin >> word) {
        for (unsigned int i = 0; i < disliked.size(); ++i) {
            if (word == disliked[i])
                disliking = true;
            else
                ;
        }
        if (disliking)
            std::cout << "BLEEP\n";
        else
            std::cout << word << std::endl;
    }

    return 0;
}