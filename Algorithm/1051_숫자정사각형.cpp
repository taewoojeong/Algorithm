#include <iostream>
#include <algorithm>

using namespace std;

int a[51][51];
int N, M, res = 1;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    string s;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            a[i][j] = s[j] - '0';
        }
    }
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            int cnt = 0;
            for (int k = 1; i + k < N && j + k < M; k++){
                if (a[i][j] == a[i][j + k] && a[i][j] == a[i + k][j] && a[i][j] == a[i + k][j + k]){
                    cnt = max(cnt, k);
                }
            }
            res = max(res, cnt + 1);
        }
    }

    cout << res * res << "\n";
    return 0;
}
