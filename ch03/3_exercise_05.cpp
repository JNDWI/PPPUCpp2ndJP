#include "../include/std_lib_facilities.h"

int main() {
    double val1 = 0;
    double val2 = 0;
    std::cout << "2つの浮遊小数点数値を入力してください。: ";
    std::cin >> val1 >> val2;
    if (val1 < val2)
        std::cout << '\n' << val1 << " < " << val2 << endl;
    else
        std::cout << '\n' << val2 << " < " << val1 << endl;
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << std::endl;
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << std::endl;
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << std::endl;

    return 0;
}