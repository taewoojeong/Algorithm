#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int T, n, m, num[501], x, y;
int indegree[501];
bool adj[501][501];

void topologySort() {
   queue <int> q;
   for (int i = 1; i <= n; i++) {
      if (indegree[i] == 0) q.push(i);
   }
   vector <int> res;
   while (!q.empty()) {
      int now = q.front();
      q.pop();

      res.push_back(now);
      indegree[now]--;

      for (int i = 1; i <= n; i++) {
         if (adj[now][i]) indegree[i]--;
         if (indegree[i] == 0) q.push(i);
      }
   }
   if (res.size() == n) {
      for (int i = 0; i < n; i++) {
         cout << res[i] << " ";
      }
      cout << "\n";
   }
   else cout << "IMPOSSIBLE" << "\n";
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

    cin >> T;
    while (T--) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> num[i];
        }
        for (int i = 1; i < n; i++) {
            for (int j = i + 1; j <= n; j++) {
                adj[num[i]][num[j]] = true;
                indegree[num[j]]++;
            }
        }

        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> x >> y;
            if (adj[x][y]) {
                adj[x][y] = false;
                adj[y][x] = true;
                indegree[y]--;
                indegree[x]++;
            }
            else {
                adj[y][x] = false;
                adj[x][y] = true;
                indegree[x]--;
                indegree[y]++;
            }
        }
        topologySort();

        memset(indegree, 0, sizeof(indegree));
        memset(adj, 0, sizeof(adj));
    }
    return 0;
}
