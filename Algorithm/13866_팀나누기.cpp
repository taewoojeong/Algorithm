#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    cout << abs(D + A - B - C);
}
