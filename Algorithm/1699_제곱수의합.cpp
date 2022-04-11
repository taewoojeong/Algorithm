#include <iostream>

using namespace std;

int main(){
    int N, dp[1000001];
    cin >> N;
    for(int i = 1; i <= N; i++)
        dp[i] = i;
        
    for(int i = 2; i <= N; i++){
        for(int j = 2; j * j <= i; j++){
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }
            
    cout << dp[N] << '\n';
}
