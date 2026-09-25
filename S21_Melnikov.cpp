#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int A, B;
    cout << "input A: ";
    cin >> A;
    cout << "input B (B > A): ";
    cin >> B;
    if (B <= A) {
        cout << "Error" << endl;
        return 1;
    }
    ofstream file("output.txt");
    for (int i = A; i <= B; i++) {
        file << i * 3 << endl;
    }
    file.close();
    cout << "Result in 'output.txt'" << endl;
    return 0;
}
