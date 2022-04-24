#include <iostream>
#include <algorithm>

using namespace std;

int dp[301];

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a[301];
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = a[1] + a[2];
    dp[3] = max(a[1] + a[3], a[2] + a[3]);
    for(int i = 4; i <= N; i++){
        dp[i] = max(dp[i - 2] + a[i], dp[i - 3] + a[i - 1] + a[i]);
    }
    cout << dp[N];
    return 0;
}
