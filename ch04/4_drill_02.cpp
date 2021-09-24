#include "../include/std_lib_facilities.h"

int main() {
    int val1{0};
    int val2{0};

    while (std::cin >> val1 >> val2) {
        if (val1 < val2)
            std::cout << "the smaller value is: " << val1
                      << "\nthe larger value is: " << val2 << std::endl;
        else
            std::cout << "the smaller value is: " << val2
                      << "\nthe larger value is: " << val1 << std::endl;
    }

    return 0;
}