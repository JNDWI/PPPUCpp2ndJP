#include "../include/std_lib_facilities.h"

constexpr double cm_per_m{100.0};
constexpr double cm_per_in{2.54};
constexpr double in_per_ft{12.0};
// const vector<std::string> legal_units{ "cm","m","in","ft" };

double min(vector<double> a) {
    double val = a[0];

    for (unsigned int i = 0; i < a.size(); ++i) {
        if (a[i] < val)
            val = a[i];
        else
            ;
    }
    return val;
}

double max(vector<double> b) {
    double val = b[0];

    for (unsigned int i = 0; i < b.size(); ++i) {
        if (b[i] > val)
            val = b[i];
        else
            ;
    }
    return val;
}

int main() {
    vector<double> numbers{};
    double input{0};
    std::string unit{" "};

    while (cin >> input >> unit) {
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