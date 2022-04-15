#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

int N, M, x, y, z, from, to;
const int INF = 1e9;

vector <int> dist;
vector <pair <int, int>> edge[1001];

priority_queue <pair <int, int>> pq;

void dijkstra() {
   dist.resize(N + 1, INF);
   dist[from] = 0;
   pq.push({ 0, from });

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
   ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);

   cin >> N >> M;
   for (int i = 0; i < M; i++) {
      cin >> x >> y >> z;
      edge[x].push_back({ y, z });
   }
   cin >> from >> to;
   dijkstra();
    
   cout << dist[to] << "\n";
}
