#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, C;
int main(int argc, char *argv[]){
    cin >> N >> C;
    vector <int> v(N);
    for(int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    int min = 0;
    int max = v[N - 1];
    int res = -1;
    
    while(min <= max){
        int mid = (min + max) / 2;
        int former = 0;
        int cnt = 1;
        for(int i = 1; i < N; i++){
            if(v[i] - v[former] >= mid){
                former = i;
                cnt++;
            }
        }
        if(cnt >= C){
            res = mid;
            min = mid + 1;
        }
        else{
            max = mid - 1;
        }
    }
    cout << res;
    return 0;
}
