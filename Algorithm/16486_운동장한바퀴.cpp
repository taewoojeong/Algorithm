#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int d1, d2;
    cin >> d1 >> d2;
    cout << fixed;
    cout.precision(6);
    cout << d1 * 2 + 2 * 3.141592 * d2;
    return 0;
}
