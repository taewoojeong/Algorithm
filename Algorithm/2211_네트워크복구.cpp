#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int, int> pii;
vector <int> dist;
int ans[1010];
vector <vector<pii>> edge;
const int INF = 1e9;
int n, m, a, b, c;
void dijkstra() {
    dist.resize(n + 1, INF);
    dist[1] = 0;
    priority_queue <pii> pq;
    pq.push({ 0, 1 });
    while (!pq.empty()) {
       int cost = -pq.top().first;
       int here = pq.top().second;
       pq.pop();
       if (dist[here] < cost) continue;
       for (int i = 0; i < edge[here].size(); i++) {
           int next = edge[here][i].first;
           int nextcost = edge[here][i].second;
           if (dist[next] > dist[here] + nextcost) {
               dist[next] = dist[here] + nextcost;
               ans[next] = here;
               pq.push({ -dist[next], next});
           }
       }
    }
}
int main(int argc, char *argv[]) {
    cin >> n >> m;
    edge.resize(n + 1);
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        edge[a].push_back({ b, c });
        edge[b].push_back({ a, c });
    }
    dijkstra();
    cout << n - 1 << endl;
    for (int i = 2; i <= n; i++) {
        cout << ans[i] << " " << i<<endl;
    }
    return 0;
}
