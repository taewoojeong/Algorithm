#include <iostream>
#include <string>
#include <queue>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int a[101][101];
int dist[101][101];
int N, M;

queue <pair<int, int>> q;

void BFS(int x, int y){
    q.push({x, y});
    dist[x][y]++;
    
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 1 || nx > N || ny < 1 || ny > M){
                continue;
            }
            if(dist[nx][ny] == 0 && a[nx][ny] == 1){
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
}

int main(int argc, char *argv[]) {
   ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> s;
        for(int j = 1; j <= M; j++){
            a[i][j] = s[j - 1] - 48;
        }
    }
    BFS(1,1);
    cout << dist[N][M];
    return 0;
}
