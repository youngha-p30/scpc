#include <iostream>
#include <iomanip>

int main()
{
    double A, B;
    std::cin >> A >> B;
    std::cout << std::fixed << std::setprecision(9) << A / B;
}
