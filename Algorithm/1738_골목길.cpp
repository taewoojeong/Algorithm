#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, u, v, w;
const int INF = 1e9;
bool cycle;
bool visited[101];
int route[101];

vector <int> rev[101];
vector <int> dist;
vector <pair <int, int>> edge[101];

void bellman_ford() {
   dist.resize(n + 1, INF);
   dist[1] = 0;

   for (int k = 1; k <= n; k++) {
      for (int i = 1; i <= n; i++) {
         int from = i;
         for (int j = 0; j < edge[from].size(); j++) {
            int next = edge[from][j].first;
            int nextcost = edge[from][j].second;

            if (dist[from] != INF && dist[next] > dist[from] + nextcost) {
               dist[next] = dist[from] + nextcost;
               route[next] = from;
               if (k == n && visited[next]) cycle = true;
            }
         }
      }
   }
}

int main(int argc, char *argv[]) {
   ios::sync_with_stdio(false);
   cin.tie(NULL); cout.tie(NULL);
   cin >> n >> m;
   for (int i = 0; i < m; i++) {
      cin >> u >> v >> w;
      edge[u].push_back({ v, -w });
      rev[v].push_back(u);
   }
   queue <int> q;
   q.push(n);
   visited[n] = 1;
   while (!q.empty()) {
      int now = q.front();
      q.pop();
      for (int i = 0; i < rev[now].size(); i++) {
         int next = rev[now][i];
         if (!visited[next]) {
            visited[next] = 1;
            q.push(next);
         }
      }
   }
   bellman_ford();
   if (cycle) cout << -1;
   else {
      vector <int> res;
      int temp = n;
      while (temp) {
         res.push_back(temp);
         temp = route[temp];
      }
      for (int i = (int)res.size() - 1; i >= 0; i--)
         cout << res[i] << " ";
   }
}
