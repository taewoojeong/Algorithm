#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, K, res = 0;
int a[101][101];
int visited[101][101];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

queue <pair<int, int>> q;

int BFS(int x, int y){
    int cnt = 0;
    q.push({x, y});
    visited[x][y] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        cnt++;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < N && ny < M && a[nx][ny] == 1 && visited[nx][ny] == 0){
                visited[nx][ny] = 1;
                q.push({nx, ny});
            }
        }
    }
    return cnt;
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int r, c;
    cin >> N >> M >> K;
    for(int i = 0; i < K; i++){
        cin >> r >> c;
        a[r - 1][c - 1] = 1;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(visited[i][j] == 0 && a[i][j] == 1){
                res = max(res, BFS(i, j));
            }
        }
    }
    cout << res << "\n";
}
