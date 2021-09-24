#include "../include/std_lib_facilities.h"

int
main()
{
    std::cout << "整数値を入力してください: ";
    int n;
    std::cin >> n;
    double m = n;

    std::cout << "n == " << n << std::endl
              << "n+1 == " << n + 1 << std::endl
              << "three times n ==" << 3 * n << std::endl
              << "twice n == " << 2 * n << std::endl
              << "n squared == " << n * n << std::endl
              << "half of n == " << n / 2 << std::endl
              << "square root of n == " << sqrt(m) << std::endl
              << "n/2 == " << n / 2 << std::endl
              << "n%2 == " << n % 2 << std::endl;

    return 0;
}