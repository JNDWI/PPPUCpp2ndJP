#include "../include/std_lib_facilities.h"

int main() {
    // 定義
    int penny = 0;
    int nickel = 0;
    int dime = 0;
    int quarter = 0;
    int half_dollar = 0;
    int dollar = 0;
    int total_cent = 0;

    // プロンプト
    std::cout << "How many pennies do you have?: ";
    std::cin >> penny;
    total_cent += penny;
    std::cout << "How many nickels do you have?: ";
    std::cin >> nickel;
    total_cent += nickel * 5;
    std::cout << "How many dimes do you have?: ";
    std::cin >> dime;
    total_cent += dime * 10;
    std::cout << "How many quarters do you have?: ";
    std::cin >> quarter;
    total_cent += quarter * 25;
    std::cout << "How many half dollars do you have?: ";
    std::cin >> half_dollar;
    total_cent += half_dollar * 50;
    std::cout << "How many dollars do you have?: ";
    std::cin >> dollar;
    total_cent += dollar * 100;

    // 出力
    std::cout << std::endl << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << std::endl;

    if (penny == 1)
        std::cout << "You have " << penny << " penny." << std::endl;
    else if (penny != 0)
        std::cout << "You have " << penny << " pennies." << std::endl;

    if (nickel == 1)
        std::cout << "You have " << nickel << " nickel." << std::endl;
    else if (nickel != 0)
        std::cout << "You have " << nickel << " nickels." << std::endl;

    if (dime == 1)
        std::cout << "You have " << dime << " dime." << std::endl;
    else if (dime != 0)
        std::cout << "You have " << dime << " dimes." << std::endl;

    if (quarter == 1)
        std::cout << "You have " << quarter << " quarter." << std::endl;
    else if (quarter != 0)
        std::cout << "You have " << quarter << " quarters." << std::endl;

    if (half_dollar == 1)
        std::cout << "You have " << half_dollar << " half dollar." << std::endl;
    else if (half_dollar != 0)
        std::cout << "You have " << half_dollar << " half dollars."
                  << std::endl;

    if (dollar == 1)
        std::cout << "You have " << half_dollar << " dollar." << std::endl;
    else if (dollar != 0)
        std::cout << "You have " << half_dollar << " dollars." << std::endl;

    std::cout << "The value of all of your coins is " << total_cent << " cents."
              << std::endl;

    return 0;
}