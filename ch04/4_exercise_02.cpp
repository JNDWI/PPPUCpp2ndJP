#include "../include/std_lib_facilities.h"

int
main()
{
    vector<double> temps;
    for (double temp; std::cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    for (unsigned int i = 0; i < temps.size(); ++i)
        sum += temps[i];
    std::cout << "Average temperature: " << sum / temps.size() << '\n';

    sort(temps);
    if (temps.size() % 2 == 0)
        std::cout << "Median temperature: "
                  << (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2
                  << '\n';
    else
        std::cout << "Median temperature: " << temps[temps.size() / 2] << '\n';

    return 0;
}