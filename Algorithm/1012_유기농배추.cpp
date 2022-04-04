#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int a[51][51];
int visited[51][51];
int N, M, K;
queue <pair<int, int>> q;

void BFS(int x, int y){
    q.push({x, y});
    visited[x][y] = 1;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= M){
                continue;
            }
            if(visited[nx][ny] == 0 && a[nx][ny] == 1){
                q.push({nx, ny});
                visited[nx][ny] = 1;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int cnt = 0;
        cin >> N >> M >> K;
        for(int j = 0; j < K; j++){
            int X, Y;
            cin >> X >> Y;
            a[X][Y] = 1;
        }
        for(int j = 0; j < N; j++){
            for(int k = 0; k < M; k++){
                if(!visited[j][k] && a[j][k]){
                    BFS(j,k);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
        memset(visited, 0, sizeof(visited));
        memset(a, 0, sizeof(a));
    }
}
