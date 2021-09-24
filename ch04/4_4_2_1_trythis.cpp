#include "../include/std_lib_facilities.h"

int
main()
{
    char character = { 'a' };

    std::cout << "char\t"
              << "int" << std::endl;
    while (character <= 'z') {
        std::cout << character << "\t" << int(character) << std::endl;
        ++character;
    }

    return 0;
}