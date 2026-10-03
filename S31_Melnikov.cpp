#include <iostream>
#include <string>

int main() {
    std::string names[10] = {
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine"
    };

    int number;
    std::cout << "Enter a digit from 0 to 9.: ";
    std::cin >> number;
    std::cout << "Title: " << names[number] << std::endl;


    return 0;
}
