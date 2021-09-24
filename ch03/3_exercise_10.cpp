#include "../include/std_lib_facilities.h"

int main() {
    std::string operation = {" "};
    double a = 0;
    double b = 0;

    std::cout << "演算子(+,-,*,/ || "
                 "plus,minus,mul,div)"
                 "を1つ入力し、それに続いて演算させたい2つの浮遊小数点数を入力"
                 "してください。: ";
    std::cin >> operation >> a >> b;

    if (operation == "+" || operation == "plus")
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    else if (operation == "-" || operation == "minus")
        std::cout << a << " - " << b << " = " << a - b << std::endl;
    else if (operation == "*" || operation == "mul")
        std::cout << a << " * " << b << " = " << a * b << std::endl;
    else if (operation == "/" || operation == "div")
        std::cout << a << " / " << b << " = " << a / b << std::endl;

    else
        std::cout << "演算子 \"" << operation << "\" は無効です。" << std::endl;

    return 0;
}