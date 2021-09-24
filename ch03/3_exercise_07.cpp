#include "../include/std_lib_facilities.h"

int main() {
    std::string a = {" "};
    std::string b = {" "};
    std::string c = {" "};
    std::string min, mid, max;

    std::cout << "3つの文字列を入力してください。: ";
    std::cin >> a >> b >> c;

    if (a < b) {
        if (a < c) {
            min = a;
            if (b < c) {
                mid = b;
                max = c; // a,b,c
            } else {
                mid = c;
                max = b; // a,c,b
            }
        } else {
            min = c;
            mid = a;
            max = b; // c,a,b
        }
    } else {
        if (b < c) {
            min = b;
            if (a < c) {
                mid = a;
                max = c; // b,a,c
            } else {
                mid = c;
                max = a; // b,c,a
            }
        } else {
            min = c;
            mid = b;
            max = a; // c,b,a
        }
    }

    std::cout << min << ", " << mid << ", " << max << std::endl;

    return 0;
}