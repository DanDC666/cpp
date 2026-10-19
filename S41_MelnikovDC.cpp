#include <iostream>

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    std::cout << squared_sum(12, 6)  << "\n";
    std::cout << squared_sum(12, -6) << "\n";
    return 0;
}
