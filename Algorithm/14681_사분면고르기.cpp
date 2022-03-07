#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 > 0 && num2 > 0) {
        cout << 1 << "\n";
    }
    else if (num1 < 0 && num2 > 0) {
        cout << 2 << "\n";
    }
    else if (num1 < 0 && num2 < 0) {
        cout << 3 << "\n";
    }
    else {
        cout << 4 << "\n";
    }
    return 0;
}
