#include <iostream>
#define INF 1e9
using namespace std;

int N, res[21][21], sum = 0;
int graph[21][21];
bool flag = false;
void Floyd() {
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(i == j || j == k || i == k) continue;
                else if(graph[i][j] > graph[i][k] + graph[k][j]){
                    flag = true;
                    return;
                }
                else if(graph[i][j] == graph[i][k] + graph[k][j])
                    res[i][j] = 1;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> graph[i][j];
        }
    }
    Floyd();
    if(flag) cout << -1 << "\n";
    else{
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(res[i][j] == 0) sum += graph[i][j];
            }
        }
        cout << sum / 2 << "\n";
    }
    return 0;
}
