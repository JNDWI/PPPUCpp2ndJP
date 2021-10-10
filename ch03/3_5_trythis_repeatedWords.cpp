#include "../include/std_lib_facilities.h"

int main() {
    string previous = " ";
    string current;

    while (std::cin >> current) {
        if (previous == current)
            std::cout << "repeated word: " << current << '\n';
        previous = current;
    }

    return 0;
}