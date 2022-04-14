#include <iostream>

using namespace std;

long long dp[1000001];
int N;

long long tile(int n){
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 2;
    }
    if(dp[n] != 0){
        return dp[n];
    }
    return dp[n] = (tile(n - 1) + tile(n - 2)) % 15746;
}

int main(){
    cin >> N;
    cout << tile(N) << "\n";
    return 0;
}
