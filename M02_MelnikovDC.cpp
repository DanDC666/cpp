#include <iostream>
#include <cmath>

double get_square(double A, int N) {
    return (N * A * A) / (4.0 * std::tan(M_PI / N));
}

int main() {
    double A;
    int N;
    std::cout << "Enter side A: ";
    std::cin >> A;
    std::cout << "Enter number of sides N: ";
    std::cin >> N;
    std::cout << "Square = " << get_square(A, N) << std::endl;
    return 0;
}
