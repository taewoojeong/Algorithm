#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, T, C, P;
    cin >> N >> T >> C >> P;
    cout << (N - 1) / T * C * P;
}
