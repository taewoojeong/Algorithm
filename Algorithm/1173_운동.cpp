#include <iostream>

using namespace std;

int N, m, M, T, R, cnt, res, minimum;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> m >> M >> T >> R;
    minimum = m;
    if(m + T > M){
        cout << "-1\n";
        return 0;
    }
    while(cnt < N){
        if(m + T <= M) {
            cnt++;
            m += T;
        }
        else {
            res++;
            m -= R;
            if(m < minimum) m = minimum;
        }
    }
    cout << cnt + res << "\n";
    return 0;
}
