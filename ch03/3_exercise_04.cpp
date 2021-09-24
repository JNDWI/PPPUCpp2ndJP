#include "../include/std_lib_facilities.h"

int
main()
{
    int val1 = 0;
    int val2 = 0;
    std::cout << "2つの整数値を入力してください。: ";
    std::cin >> val1 >> val2;
    if (val1 < val2)
        std::cout << '\n' << val1 << " < " << val2 << std::endl;
    else
        std::cout << '\n' << val2 << " < " << val1 << std::endl;
    std::cout << val1 << " + " << val2 << " = " << val1 + val2 << std::endl;
    std::cout << val1 << " - " << val2 << " = " << val1 - val2 << std::endl;
    std::cout << val1 << " * " << val2 << " = " << val1 * val2 << std::endl;
    std::cout << val1 << " / " << val2 << " = " << val1 / val2 << std::endl;

    return 0;
}