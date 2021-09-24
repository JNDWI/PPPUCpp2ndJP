#include "../include/std_lib_facilities.h"

int
main()
{
    double val1{ 0 };
    double val2{ 0 };

    while (std::cin >> val1 >> val2) {
        if (val1 < val2)
            std::cout << "the smaller value is: " << val1 << endl
                      << "the larger value is: " << val2 << std::endl;
        else if (val2 < val1)
            std::cout << "the smaller value is: " << val2 << endl
                      << "the larger value is: " << val1 << std::endl;
        else
            cout << "the numbers are equal" << endl;
    }

    return 0;
}