#include <iostream>
#include <iomanip>

int main() {
    int currentYear = 2022;
    double income[5];
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Enter income for " << currentYear - i << ": ";
        std::cin >> income[i];
    }

    double average = 0.0;

    for (int i = 0; i < 5; i++)
    {
        average += income[i];
    }

    average /= 5.0;


    std::cout << "\nIncome (averaged over the past 5 years) is : $" << std::fixed << std::setprecision(2) << average << std::endl;



    return 0;
}
