#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, K, res = -1000000000;
    cin >> N >> K;
    vector <int> v(N + 1);
    vector <int> sum(N + 1);
    for(int i = 1; i <= N; i++){
        cin >> v[i];
        sum[i] = sum[i - 1] + v[i];
    }
    for(int i = 0; i < N - K + 1; i++){
        res = max(res, sum[i + K] - sum[i]);
    }
    cout << res;
    return 0;
}
