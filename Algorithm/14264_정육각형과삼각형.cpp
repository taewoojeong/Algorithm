#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    double L;
    cin >> L;
    double result = L * L * sqrt(3) / 4;
    cout << fixed;
    cout.precision(10);
    cout << result;
    return 0;
}
