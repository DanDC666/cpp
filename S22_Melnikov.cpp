#include <iostream>
#include <fstream>

int main() {
    system("cd");
    std::ifstream file("output");
    int n = 1;
    double number;
    while (file >> number) {
        std::cout << " sequence number " << n <<
        " number "<< number << "\n";
        ++n;
    }
    file.close();
    return 0;
}

