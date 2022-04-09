#include <iostream>
#include <vector>
#include <queue>
#define INF 2100000000
using namespace std;

int N, E, a, b, c, v1, v2, v12, v21;
vector <pair<int, int>> edge[801];


int dijkstra(int from, int to) {
    priority_queue <pair<int,int>> pq;
    vector <int> dist(N + 1, INF);
    pq.push({0, from});
    dist[from] = 0;
    while(!pq.empty()){
        int cost = -pq.top().first;
        int now = pq.top().second;
        pq.pop();
        if(dist[now] < cost) continue;
        for(int i = 0; i < edge[now].size(); i++){
            int next = edge[now][i].first;
            int nextcost = edge[now][i].second;
            if(dist[next] > dist[now] + nextcost){
                dist[next] = dist[now] + nextcost;
                pq.push({ -dist[next], next});
            }
        }
    }
    return dist[to];
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> N >> E;
    for(int i = 0; i < E; i++){
        cin >> a >> b >> c;
        edge[a].push_back({b, c});
        edge[b].push_back({a, c});
    }
    cin >> v1 >> v2;
    v12 = dijkstra(1, v1) + dijkstra(v1, v2) + dijkstra(v2, N);
    v21 = dijkstra(1, v2) + dijkstra(v2, v1) + dijkstra(v1, N);
    if(dijkstra(1, v1) == INF || dijkstra(v1, v2) == INF || dijkstra(v2, N) == INF) {
        cout << -1 << "\n";
        return 0;
    }
    if(v12 < v21) cout << v12 << "\n";
    else cout << v21 << "\n";
    return 0;
}
