#include <iostream>
using namespace std;

int N, s, t;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true) {
        cin >> N;
        if(N == -1) break;
        int res = 0;
        int before = 0;
        for(int i = 0; i < N; i++) {
            cin >> s >> t;
            res += s * (t - before);
            before = t;
        }
        cout << res << " miles\n";
    }
    return 0;
}
