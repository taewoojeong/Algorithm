#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1000000000
using namespace std;

int T, N, num;
int graph[126][126];
int dist[126][126];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

queue <pair<int,int>> q;

void BFS(){
    fill(&dist[0][0], &dist[N][N], INF);
    q.push({0,0});
    dist[0][0] = graph[0][0];
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < N && ny < N && dist[nx][ny] > dist[x][y] + graph[nx][ny]){
                dist[nx][ny] = dist[x][y] + graph[nx][ny];
                q.push({nx, ny});
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i = 1;; i++){
        cin >> N;
        if(N == 0) break;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                cin >> graph[i][j];
            }
        }
        BFS();
        cout << "Problem " << i << ": " << dist[N - 1][N - 1] << "\n";
    }
    return 0;
}
