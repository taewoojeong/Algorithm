#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int S, T, D;
    cin >> S >> T >> D;
    cout << D / (2 *  S) * T << "\n";
    return 0;
}
