#include <iostream>
#include <vector>
#define INF 2100000000
using namespace std;

int TC, N, M, W, S, E, T, cycle;


void Bellman_ford(vector <pair <int, int>> edge[]) {
    cycle = false;
    vector <int> dist(N + M + 1, INF);
    dist[1] = 0;
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < edge[i].size(); j++) {
                int next = edge[i][j].first;
                int nextcost = edge[i][j].second;
                if (dist[next] > dist[i] + nextcost) {
                    dist[next] = dist[i] + nextcost;
                    if (k == N) cycle = true;
                }
            }
        }
    }
}


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> TC;
    while(TC--){
        vector <pair<int, int>> edge[501];
        cin >> N >> M >> W;
        for(int i = 0; i < M; i++){
            cin >> S >> E >> T;
            edge[S].push_back({E, T});
            edge[E].push_back({S, T});
        }
        for(int i = 0; i < W; i++){
            cin >> S >> E >> T;
            edge[S].push_back({E, -T});
        }
        Bellman_ford(edge);
        cycle ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
