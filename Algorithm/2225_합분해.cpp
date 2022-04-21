#include <iostream>
using namespace std;

long long dp[201][201];

int main(int argc, const char * argv[]) {
    int N, K;
    cin >> N >> K;
    for(int i = 0; i <= N; i++){
        dp[i][1] = 1;
    }
    for(int i = 0; i <= N; i++){
        for(int j = 2; j <= K; j++){
            for(int k = 0; k <= i; k++){
                dp[i][j] += dp[k][j - 1] % 1000000000;
            }
        }
    }
    cout << dp[N][K] % 1000000000;
    return 0;
}
