#include <iostream>
using namespace std;

int N, K, a[1001];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> K;
    for(int i = 2; i <= N; i++) {
        if(a[i] == 0) {
            for(int j = i; j <= N; j += i) {
                if(a[j] == 0){
                    a[j] = 1;
                    K--;
                    if(!K) {
                        cout << j << "\n";
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
