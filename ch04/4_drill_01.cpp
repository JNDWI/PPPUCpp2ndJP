#include "../include/std_lib_facilities.h"

int
main()
{
    int val1{ 0 };
    int val2{ 0 };

    while (cin >> val1 >> val2)
        std::cout << val1 << val2 << std::endl;

    return 0;
}