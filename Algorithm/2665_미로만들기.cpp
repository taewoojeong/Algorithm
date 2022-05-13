#include <iostream>
#include <string>
#include <queue>
using namespace std;

int N;
int map[51][51];
int dist[51][51];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
queue <pair<int, int>> q;

void BFS(){
    q.push({0,0});
    dist[0][0] = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if (map[nx][ny] == 0){
                if (dist[nx][ny] > dist[x][y] + 1){
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                }
            }
            else if (map[nx][ny] == 1){
                if (dist[nx][ny] > dist[x][y]){
                    dist[nx][ny] = dist[x][y];
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        for(int j = 0; j < N; j++){
            map[i][j] = s[j] - 48;
            dist[i][j] = 1e9;
        }
    }
    BFS();
    cout << dist[N - 1][N - 1] << "\n";
    return 0;
}
