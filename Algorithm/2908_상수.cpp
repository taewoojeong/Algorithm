#include <iostream>

using namespace std;

int A, B;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B;
    A = A % 10 * 100 + A % 100 / 10 * 10 + A / 100;
    B = B % 10 * 100 + B % 100 / 10 * 10 + B / 100;
    A > B ? cout << A << "\n" :cout << B << "\n";
    return 0;
}
