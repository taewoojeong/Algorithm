#include <iostream>
#include <algorithm>
using namespace std;

int N, K, X, Y, S;
int a[401][401];

void floyd(){
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i != j && a[i][j] == 0){
                    if(a[i][k] == -1 && a[k][j] == -1) a[i][j] = -1;
                    else if(a[i][k] == 1 && a[k][j] == 1) a[i][j] = 1;
                }
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> K;
    for(int i = 0; i < K; i++){
        cin >> X >> Y;
        a[X][Y] = -1;
        a[Y][X] = 1;
    }
    floyd();
    cin >> S;
    while(S--){
        cin >> X >> Y;
        cout << a[X][Y] << "\n";
    }
    return 0;
}
