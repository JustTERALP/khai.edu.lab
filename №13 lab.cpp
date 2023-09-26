#include <iostream>
#include <cmath>

int main() {
    double A = 11;
    double B = 65;
    double C = 3;


    double lengthAC = std::abs(C - A);
    double lengthBC = std::abs(C - B);


    double sumLength = lengthAC + lengthBC;


    std::cout << "(A - C): " << lengthAC << std::endl;
    std::cout << "(B - C): " << lengthBC << std::endl;
    std::cout << "(A - C) + (B - C): " << sumLength << std::endl;

    return 0;
}
