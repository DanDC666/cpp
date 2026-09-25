#include <iostream>

int main() {
    bool flag = true;
    char letter = 'A';
    int number = 10;
    float decimal = 3.5;
    std::cout << "=== Variable values ===\n";
    std::cout << "bool flag     = " << flag << "\n";
    std::cout << "char letter   = " << letter << "\n";
    std::cout << "int number    = " << number << "\n";
    std::cout << "float decimal = " << decimal << "\n";
    std::cout << "=== Arithmetic operations ===\n";
    std::cout << number + flag << "\n";
    std::cout << number - letter << "\n";
    std::cout << number * decimal << "\n";
    std::cout << flag / letter << std::endl;
    return 0;
}
