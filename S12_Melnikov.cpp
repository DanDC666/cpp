#include <iostream>

int main() {
    int sum = 0;
    int i = 1;
    while (i <= 1000) {
        if (i % 7 == 0)
            sum += i;
        i += 4;
        std::cout << i << '\t';
    }
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}
