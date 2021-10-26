#include "../include/std_lib_facilities.h"

int main() {
    std::string number = {" "};

    std::cout << "一桁の数字を英語のスペルで入力してください。(ex:zero): ";
    std::cin >> number;

    if (number == "zero")
        std::cout << 0 << std::endl;
    else if (number == "one")
        std::cout << 1 << std::endl;
    else if (number == "two")
        std::cout << 2 << std::endl;
    else if (number == "three")
        std::cout << 3 << std::endl;
    else if (number == "four")
        std::cout << 4 << std::endl;
    else
        std::cout << "not a number I know" << std::endl;

    return 0;
}