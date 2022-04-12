#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

const int INF = 1e9;

int V, E, K, x, y, w;

vector <int> dist;
vector <pair <int, int>> edge[20001];

priority_queue <pair <int, int>> pq;

void dijkstra() {
    dist.resize(V + 1, INF);
    dist[K] = 0;
    pq.push({ 0, K });

    while (!pq.empty()) {
        int cost = -pq.top().first;
        int now = pq.top().second;
        pq.pop();

        if (dist[now] < cost) continue;
        for (int i = 0; i < edge[now].size(); i++) {
            int next = edge[now][i].first;
            int nextcost = edge[now][i].second;

            if (dist[next] > dist[now] + nextcost) {
            dist[next] = dist[now] + nextcost;
            pq.push({ -dist[next], next });
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

    cin >> V >> E >> K; 시작정점
    for (int i = 0; i < E; i++) {
        cin >> x >> y >> w;
        edge[x].push_back({ y, w });
    }
    dijkstra();

    for (int i = 1; i <= V; i++) {
        if (dist[i] == INF) cout << "INF\n";
        else cout << dist[i] << "\n";
    }
}
