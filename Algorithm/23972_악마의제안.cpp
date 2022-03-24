#include <iostream>
using namespace std;

int K, N;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> K >> N;
    if (N == 1) cout << -1 << "\n";
    else{
        for(int i = K;; i++){
            if((i - K) * N >= i){
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
