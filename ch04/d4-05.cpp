#include "../include/std_lib_facilities.h"

constexpr double TOLERANCE{1.0 / 100};

bool almost_equal(double a, double b) {
    if (abs(a - b) < TOLERANCE)
        return true;
    else
        return false;
}

double min(double a, double b) {
    if (a < b)
        return a;
    else
        return b;
}

double max(double a, double b) {
    if (a >= b)
        return a;
    else
        return b;
}

int main() {
    double val1{0};
    double val2{0};

    while (std::cin >> val1 >> val2) {
        if (val1 == val2)
            std::cout << "the numbers are euqal\n";
        else {
            std::cout << "the smaller value is: " << min(val1, val2)
                      << "\nthe larger value is: " << max(val1, val2)
                      << std::endl;
            if (almost_equal(val1, val2))
                std::cout << "the numbers are almost equal\n";
            else
                ;
        }
    }

    return 0;
}