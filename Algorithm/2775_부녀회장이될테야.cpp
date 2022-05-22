#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

int T, k, n;
int a[15][15];

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> k >> n;
        for(int i = 0; i <= k; i++) {
            for(int j = 0; j < n; j++) {
                if(i == 0) a[i][j] = j + 1;
                else {
                    for(int l = 0; l <= j; l++){
                        a[i][j] += a[i - 1][l];
                    }
                }
            }
        }
        cout << a[k][n - 1] << "\n";
        memset(a, 0, sizeof(a));
    }
    return 0;
}
