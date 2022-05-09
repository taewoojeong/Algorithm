#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

vector <int> v[101];

int dist[101];

queue <int> q;

int BFS(int start, int end){
    q.push(start);

    while (!q.empty()) {
       int now = q.front();
       q.pop();

       if (now == end) {
          return dist[end];
       }
       for (int i = 0; i < v[now].size(); i++) {
          int next = v[now][i];

          if (!dist[next]) {
             q.push(next);
             dist[next] = dist[now] + 1;
          }
       }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N, M, start, end;

    cin >> N >> start >> end >>  M;

    int x, y;
    for (int i = 0; i < M; i++) {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cout << BFS(start, end);
    return 0;
}
