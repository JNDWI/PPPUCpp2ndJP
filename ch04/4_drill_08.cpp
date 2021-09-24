#include "../include/std_lib_facilities.h"

constexpr double CM_PER_M{ 100.0 };
constexpr double CM_PER_IN{ 2.54 };
constexpr double IN_PER_FT{ 12.0 };
constexpr double M_PER_HYDE{ 1.61 };
const vector<std::string> legal_units{ "cm", "m", "in", "ft", "hyde" };

bool
is_legal_unit(const std::string& a, vector<std::string> legalUnits)
{
    for (unsigned int i = 0; i < legalUnits.size(); ++i) {
        if (a == legalUnits[i])
            return true;
        else
            ;
    }
    return false;
}

// string b には有効な単位のみ渡すこと。
double
conv_into_m(double a, const std::string& b)
{
    if (b == "m")
        return a;
    else if (b == "cm")
        return a / CM_PER_M;
    else if (b == "in")
        return a * CM_PER_IN / CM_PER_M;
    else if (b == "ft")
        return a * IN_PER_FT * CM_PER_IN / CM_PER_M;
    else
        return a * M_PER_HYDE;
}

double
min(vector<double> a)
{
    double val = a[0];

    for (unsigned int i = 0; i < a.size(); ++i) {
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

    for (unsigned int i = 0; i < b.size(); ++i) {
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
    std::string unit;

    while (std::cin >> input >> unit) {
        if (is_legal_unit(unit, legal_units)) {
            numbers.push_back(input);
            if (input == min(numbers))
                std::cout << '\t' << input << " the smallest so far.\n";
            else if (input == max(numbers))
                std::cout << '\t' << input << " the largest so far.\n";
            else
                std::cout << '\t' << input << std::endl;
        } else
            std::cout << "無効な単位です." << std::endl;
    }

    return 0;
}