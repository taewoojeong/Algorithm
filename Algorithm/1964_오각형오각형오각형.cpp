#include <iostream>

using namespace std;

long long N, res = 5;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 1; i < N; i++){
        res += (4 + 3 * i) % 45678;
    }
    cout << res % 45678 << "\n";
}
