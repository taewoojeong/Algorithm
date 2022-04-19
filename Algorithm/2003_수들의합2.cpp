#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M, cnt = 0;
    cin >> N >> M;
    vector <int> v(N + 1);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    int start = 0, end = 0;
    int result = v[0];
    while(start <= end && end < N){
        if(result < M){
            result += v[++end];
        }
        else if(result == M){
            cnt++;
            result += v[++end];
        }
        else if(result > M){
            result -= v[start++];
            if(start  > end){
                end = start;
                result = v[start];
            }
        }
    }
    cout << cnt;
    return 0;
}
