#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N, res;


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    vector <int> v(N);
    vector <int> dp(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    dp[0] = v[0];
    res = dp[0];
    for(int i = 0; i < N; i++){
        dp[i] = max(dp[i - 1] + v[i], v[i]);
        res = max(res, dp[i]);
    }
    cout << res;
    return 0;
}
