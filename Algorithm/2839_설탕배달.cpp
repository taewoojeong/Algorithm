#include <iostream>
#include <algorithm>

using namespace std;

int N;
int dp[5001];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    dp[3] = 1;
    dp[5] = 1;
    for(int i = 6; i <= N; i++){
        if(dp[i - 3] && dp[i - 5]) {
            dp[i] = min(dp[i - 3], dp[i - 5]) + 1;
        }
        else if(dp[i - 3]){
            dp[i] = dp[i - 3] + 1;
        }
        else if(dp[i - 5]){
            dp[i] = dp[i - 5] + 1;
        }
    }
    if(dp[N]) cout << dp[N] << "\n";
    else cout << "-1\n";
    return 0;
}
