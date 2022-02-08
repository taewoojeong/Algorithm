#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double A, B;
    cin >> A >> B;
    cout.precision(12);
    cout << A / B;
    return 0;
}
