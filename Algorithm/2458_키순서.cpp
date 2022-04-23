#include <iostream>
#define INF 1000000000
using namespace std;

int graph[501][501];

int N, M, a, b, res = 0;

void Floyd() {
    for(int k = 1;  k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(graph[i][j] > graph[i][k] + graph[k][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            graph[i][j] = INF;
        }
    }
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        graph[a][b] = 1;
    }
    Floyd();
    for(int i = 1; i <= N; i++){
        int cnt = 0;
        for(int j = 1; j <= N; j++){
            if(graph[i][j] != INF || graph[j][i] != INF){
                cnt++;
            }
        }
        if(cnt == N - 1) res++;
    }
    cout << res << "\n";
    return 0;
}
