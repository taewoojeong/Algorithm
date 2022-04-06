#include <iostream>
#include <algorithm>
using namespace std;

int T, N, X, Y, res = 0;
char c[51][51];
int a[51][51];

void floyd(){
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i == j) continue;
                if(c[i][k] == 'Y' && c[k][j] == 'Y') a[i][j] = 1;
                if(c[i][j] == 'Y') a[i][j] = 1;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    string s;
    for(int i = 1; i <= N; i++){
        cin >> s;
        for(int j = 1; j <= N; j++){
            c[i][j] = s[j - 1];
        }
    }
    floyd();
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            a[i][0] += a[i][j];
        }
        res = max(res, a[i][0]);
    }
    cout << res << "\n";
    return 0;
}
