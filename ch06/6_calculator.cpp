/*
 *    これは第６章「プログラムの記述」を進める際に使ったソースファイルである。TRY
 * THISとは全く関係ない。
 */

#include "../include/std_lib_facilities.h"

class Token {
  public:
    char kind;
    double value;
};

int main() {
    std::cout << "Please enter expression (we can handle + and -): ";
    int lval = 0;
    int rval;
    char op;
    int res;
    std::cin >> lval >> op >> rval;

    if (op == '+')
        res = lval + rval; // 加算
    else if (op == '-')
        res = lval - rval; // 減算

    std::cout << "Result: " << res << '\n';

    return 0;
}
