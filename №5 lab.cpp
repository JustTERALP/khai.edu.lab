#include <iostream>

int main() {
    double a;

    std::cout << "a: ";
    std::cin >> a;

    double volume = a * a * a;
    std::cout << "V = " << volume << std::endl;

    double surface_area = 6 * a * a;
    std::cout << "S = " << surface_area << std::endl;

    return 0;
}
