#include <iostream>

using namespace std;

int main() {
    int a, b, num, sum = 0, min;
    cin >> a >> b;
    min = b;
    for (int i = a; i < b + 1; i++) {
        num = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                num++;
            }
        }
        if (num == 1) {
            sum += i;
            if (i < min) {
                min = i;
            }
        }
    }
    if (sum > 0) {
        cout << sum << " " << min;
    }
    else {
        cout << -1 << "\n";
    }
}
