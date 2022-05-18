#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <utility>
using namespace std;

long long dp[65][10] = {0};

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i <= 9; i++){
        dp[1][i] = 1;
    }
    for(int i = 2; i <= 64; i++){
        for(int j = 0; j <= 9; j++){
            for(int k = j; k <=9; k++){
                dp[i][j] += dp[i - 1][k];
            }
        }
    }
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        long long res = 0;
        for(int i = 0; i <= 9; i++){
            res += dp[num][i];
        }
        cout << res << "\n";
    }
}
