#include <iostream>

using namespace std;

int R;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> R;
    cout << fixed;
    cout.precision(6);
    cout << R * R * 3.14159265358979323846264338327950288419716939937510582097494 << "\n" << R * R * 2 << "\n";
    return 0;
}
