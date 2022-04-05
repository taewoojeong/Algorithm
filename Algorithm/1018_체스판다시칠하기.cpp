#include <iostream>

using namespace std;

int N, M, res = 2500, chess[51][51];
char c;

int check(int x, int y){
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = x; i <x + 8; i++){
        for(int j = y; j < y + 8; j++){
            if((i + j) % 2 == chess[i][j]) cnt1++;
            if((i + j + 1) % 2 == chess[i][j]) cnt2++;
        }
    }
    return min(cnt1, cnt2);
}

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> c;
            if(c == 'B') chess[i][j] = 0;
            else chess[i][j] = 1;
        }
    }
    for(int i = 0; i <= N - 8; i++){
        for(int j = 0; j <= M - 8; j++){
            res = min(res, check(i, j));
        }
    }
    cout << res << "\n";
    return 0;
}
