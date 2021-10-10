#include "../include/std_lib_facilities.h"

int square(int x) {
    int result{0};

    for (int i = 1; i <= x; ++i)
        result += x;

    return result;
}

int main() {
    std::cout << "Number\tSquare\n";
    for (int i = 1; i <= 100; ++i)
        std::cout << i << '\t' << square(i) << std::endl;
    keep_window_open();

    return 0;
}