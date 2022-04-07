#include <iostream>
#include <algorithm>
#define INF 2100000000
using namespace std;

int N, M, A, B, person;
int result = INF;
int a[101][101];

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
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> A >> B;
        a[A][B] = 1;
        a[B][A] = 1;
    }
    floyd();
    for(int i = 1; i <= N; i++){
        int sum = 0;
        for(int j = 1; j <= N; j++){
            sum += a[i][j];
        }
        if(result > sum){
            result = sum;
            person = i;
        }
    }
    
    cout << person << "\n";
    return 0;
}
