#include "../include/std_lib_facilities.h"

int main() {
    int number = 0;

    std::cout << "整数値をひとつ入力してください。: ";
    std::cin >> number;

    if (number % 2 == 0)
        std::cout << number << " は偶数である。" << std::endl;
    else
        std::cout << number << " は奇数である。" << std::endl;

    return 0;
}