#include <iostream>
#include <vector>
using namespace std;

int N, M;
int main(){
    ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    long long K, N, min = 1, M, max = -1, cnt, res = 0;
    cin >> K >> N;
    vector <int> v(K);
    for(int i = 0; i < K; i++) {
        cin >> v[i];
        if(max < v[i]){
            max = v[i];
        }
    }
    while(min <= max){
        M = (min + max) / 2;
        cnt = 0;
        for(int i = 0; i < K; i++) {
            cnt += v[i] / M;
        }
        if(cnt < N){
            max = M - 1;
        }
        else{
            min = M + 1;
            if(res < M){
                res = M;
            }
        }
    }
    cout << res;
}
