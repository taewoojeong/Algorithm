#include <iostream>

using namespace std;
int hansu(int n) {
    if (n < 100) {
        return 1;
    }
    else if (n < 1000 && n > 100) {
        if (n / 100 + n % 10 == 2 * (n % 100 / 10)) {
            return 1;
        }
        else {
            return 0;
        }
    }
    else {
        return 0;
    }
}

int main(int argc, char *argv[]) {
    int num, sum = 0;
    cin >> num;
    for (int i = 1; i <  num + 1; i++) {
        sum += hansu(i);
    }
    cout << sum << "\n";
}
