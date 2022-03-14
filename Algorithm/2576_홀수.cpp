#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, sum = 0, res = 100;
    for(int i = 0; i < 7; i++){
        cin >> N;
        if(N % 2 == 1){
            sum += N;
            res = min(res, N);
        }
    }
    if(sum > 0) cout << sum << " " << res << "\n";
    else cout << "-1\n";
}
