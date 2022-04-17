#include <iostream>
#define INF 1000000000
using namespace std;

int V, E, a, b, c, res = INF;

int graph[401][401];

void Floyd() {
    for(int k = 1;  k <= V; k++){
        for(int i = 1; i <= V; i++){
            for(int j = 1; j <= V; j++){
                if(graph[i][j] > graph[i][k] + graph[k][j])
                    graph[i][j] = graph[i][k] + graph[k][j];
            }
        }
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> V >> E;
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            graph[i][j] = INF;
        }
    }
    for(int i = 0; i < E; i++){
        cin >> a >> b >> c;
        graph[a][b] = c;
    }
    Floyd();
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            if(i == j) continue;
            if(graph[i][j] != INF && graph[j][i] != INF){
                res = min(res, graph[i][j] + graph[j][i]);
            }
        }
    }
    if(res == INF) cout << -1 << "\n";
    else cout << res << "\n";
    return 0;
}
