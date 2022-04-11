#include <iostream>
#define INF 1000000000
using namespace std;

int V, E, a, b, c;

int graph[201][201];
int res[201][201];

void Floyd() {
    for(int k = 1;  k <= V; k++){
        for(int i = 1; i <= V; i++){
            for(int j = 1; j <= V; j++){
                if(graph[i][j] > graph[i][k] + graph[k][j]){
                    graph[i][j] = graph[i][k] + graph[k][j];
                    if(i != k) res[i][j] = res[i][k];
                }
            }
        }
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> V >> E;
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            if(i != j) graph[i][j] = INF;
        }
    }
    for(int i = 0; i < E; i++){
        cin >> a >> b >> c;
        res[a][b] = b;
        res[b][a] = a;
        graph[a][b] = c;
        graph[b][a] = c;
    }
    Floyd();
    for(int i = 1; i <= V; i++){
        for(int j = 1; j <= V; j++){
            if(i == j) cout << "- ";
            else cout << res[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
