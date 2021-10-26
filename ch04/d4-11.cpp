#include "../include/std_lib_facilities.h"

constexpr double CM_PER_M{100.0};
constexpr double CM_PER_IN{2.54};
constexpr double IN_PER_FT{12.0};
constexpr double M_PER_HYDE{1.56};
const vector<std::string> legal_units{"cm", "m", "in", "ft", "hyde"};

bool is_legal_unit(const std::string unit, vector<std::string> legalUnits) {
    for (unsigned int i = 0; i < legalUnits.size(); ++i) {
        if (unit == legalUnits[i])
            return true;
        else
            ;
    }
    return false;
}

// string unit には有効な単位のみ渡すこと。
double conv_into_m(double value, const std::string &unit) {
    if (unit == "m")
        return value;
    else if (unit == "cm")
        return value / CM_PER_M;
    else if (unit == "in")
        return value * CM_PER_IN / CM_PER_M;
    else if (unit == "ft")
        return value * IN_PER_FT * CM_PER_IN / CM_PER_M;
    else // (unit == "hyde")
        return value * M_PER_HYDE;
}

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
    vector<double> values{};
    vector<double> legal_meters{};
    double input{0};
    std::string unit;
    double smallest{0};
    double largest{0};
    double sum{0};
    int count{0};

    std::cout << "Input unit(cm, m, in, ft, hyde) following double value.\n";
    while (std::cin >> input >> unit) {
        if (is_legal_unit(unit, legal_units)) {
            values.push_back(conv_into_m(input, unit));
            ++count;
            sum += conv_into_m(input, unit);
            legal_meters.push_back(conv_into_m(input, unit));
            if (conv_into_m(input, unit) == min(values)) {
                std::cout << '\t' << input << unit << '('
                          << conv_into_m(input, unit) << "m)"
                          << " the smallest so far.\n";
                smallest = conv_into_m(input, unit);
            } else if (conv_into_m(input, unit) == max(values)) {
                std::cout << '\t' << input << unit << '('
                          << conv_into_m(input, unit) << "m)"
                          << " the largest so far.\n";
                largest = conv_into_m(input, unit);
            } else
                std::cout << '\t' << input << unit << '('
                          << conv_into_m(input, unit) << "m)\n";
        } else
            std::cout << "Invalid Value.\n";
    }

    std::cout << "Minimum Value: " << smallest << "m\n"
              << "Maximum Value: " << largest << "m\n"
              << "Number of Values: " << count << '\n'
              << "Total of Values: " << sum << "m\n";

    std::cout << "Inputted Values(Sorted): \n";
    sort(legal_meters);
    for (double value : legal_meters)
        std::cout << '\t' << value << "m\n";

    return 0;
}