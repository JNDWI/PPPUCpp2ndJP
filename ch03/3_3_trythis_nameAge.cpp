#include "../include/std_lib_facilities.h"

int main() {
    std::cout << "Please enter your first_name and age\n";
    string first_name = "???";
    double age = -1;
    std::cin >> first_name >> age;
    std::cout << "Hello, " << first_name << " (age: " << age * 12
              << "months)\n";
    keep_window_open();
    return 0;
}