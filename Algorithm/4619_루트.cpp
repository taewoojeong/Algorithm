#include <iostream>
#include <algorithm>
using namespace std;

int B, N, res;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true) {
        cin >> B >> N;
        if(B == N && N == 0) break;
        int res = 1e9;
        int resnum = 0;
        for(int i = 1; ; i++) {
            int num = 1;
            for(int j = 0; j < N; j++) {
                num *= i;
            }
            if(res > abs(B - num)) {
                res = abs(B - num);
                resnum = i;
            }
            if(num > B) {
                break;
            }
        }
        cout << resnum << "\n";
    }
    return 0;
}
