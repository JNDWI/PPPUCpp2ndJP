#include "../include/std_lib_facilities.h"

int main() {
    double val1{0};
    double val2{0};
    char op{' '};

    std::cout << "電卓...\n";
    std::cout << "2つのdouble値と演算子を1つ入力してください。(+,-,*,/) >> ";

    while (std::cin >> val1 >> val2 >> op) {
        switch (op) {
        case '+':
            std::cout << "The sum of " << val1 << " and " << val2 << " is "
                      << val1 + val2 << '\n';
            break;
        case '-':
            std::cout << "The difference of " << val1 << " and " << val2
                      << " is " << val1 - val2 << '\n';
            break;
        case '*':
            std::cout << "The product of " << val1 << " and " << val2 << " is "
                      << val1 * val2 << '\n';
            break;
        case '/':
            if (val2 == 0)
                std::cout << "ERROR: Division by zero\n";
            else
                std::cout << "The division of " << val1 << " and " << val2
                          << " is " << val1 / val2 << '\n';
            break;
        default:
            break;
        }
        std::cout << ">> ";
    }

    return 0;
}