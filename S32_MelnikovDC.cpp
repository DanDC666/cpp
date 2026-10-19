#include <iostream>
#include <cstring>

int main() {
    const int SIZE = 256;
    char str[SIZE];

    std::cout << "Enter the string: ";
    std::cin.getline(str, SIZE);

    int len = strlen(str);

    char* p = str;

    for (int i = 0; i < len; i++) {
        *(p + i) = *(p + i) + 1;
    }
    std::cout << "Result: " << str << std::endl;
    return 0;
}
