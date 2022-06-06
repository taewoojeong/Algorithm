#include <iostream>

using namespace std;

int N, M, K, res, r;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M >> K;
    if(N >= M * 2){
        res += M;
        N -= M * 2;
        M = 0;
        r = N;
    } else {
        res += N / 2;
        M -= N / 2;
        N %= 2;
        r = N + M;
    }
    K -= r;
    if(K > 0){
        res -= K / 3;
        if(K % 3) res--;
    }
    cout << res << "\n";
    return 0;
}
