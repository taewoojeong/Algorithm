#include <iostream>
using namespace std;

int N, M, A, B, res = 2100000000, cnt;
int a[51][51];

void floyd(){
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i == j) continue;
                else if(a[i][k] && a[k][j]){
                    if(a[i][j] == 0){
                        a[i][j] = a[i][k] + a[k][j];
                    }
                    else{
                        a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
                    }
                }
            }
        }
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    while(true){
        cin >> A >> B;
        if(A < 0) break;
        a[A][B] = 1;
        a[B][A] = 1;
    }
    floyd();
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            a[i][0] = max(a[i][0], a[i][j]);
        }
        res = min(res, a[i][0]);
    }
    for(int i = 1; i <= N; i++){
        if(res == a[i][0]) cnt++;
    }
    cout << res << " " << cnt << "\n";
    for(int i = 1; i <= N; i++){
        if(res == a[i][0]) cout << i << " ";
    }
    return 0;
}
