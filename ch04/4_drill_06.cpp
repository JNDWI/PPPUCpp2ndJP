#include "../include/std_lib_facilities.h"

double
min(vector<double> a)
{
    double val = a[0];

    for (unsigned int i = 0; i < a.size();
         ++i) { // なぜか int i=0 が double i=0 になってたので修正。
        if (a[i] < val)
            val = a[i];
        else
            ;
    }

    return val;
}

double
max(vector<double> b)
{
    double val = b[0];

    for (unsigned int i = 0; i < b.size();
         ++i) { // int i=0 が double i=0 になってたので修正。
        if (b[i] > val)
            val = b[i];
        else
            ;
    }

    return val;
}

int
main()
{
    vector<double> numbers{};
    double input{ 0 };

    while (std::cin >> input) {
        numbers.push_back(input);
        if (input == min(numbers))
            std::cout << '\t' << input << " the smallest so far.\n";
        else if (input == max(numbers))
            std::cout << '\t' << input << " the largest so far.\n";
        else
            std::cout << '\t' << input << std::endl;
    }

    return 0;
}