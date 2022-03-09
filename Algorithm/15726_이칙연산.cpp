#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    double A, B, C;
    cin >> A >> B >> C;
    cout << (int)max(A * B / C, A / B * C) << "\n";
    return 0;
}
