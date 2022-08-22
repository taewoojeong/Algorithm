#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int dx[8] = { 1, 1, 1, 0, -1, -1, -1, 0 };
int dy[8] = { 1, 0, -1, -1, -1, 0, 1, 1 };

int a[51][51];
int visited[51][51];
int w, h;
queue <pair<int, int>> q;

void BFS(int x, int y){
    q.push({x, y});
    visited[x][y] = 1;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 8; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 1 || nx > h || ny < 1 || ny > w){
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
    cin >> w >> h;
    while(w != 0 && h != 0){
        int cnt = 0;
        for(int i = 1; i <= h; i++){
            for(int j = 1; j <= w; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= h; i++){
            for(int j = 1; j <= w; j++){
                if(visited[i][j] == 0 && a[i][j] == 1){
                    cnt++;
                    BFS(i, j);
                }
            }
        }
        cout << cnt << "\n";
        cin >> w >> h;
        memset(visited, 0, sizeof(visited));
        memset(a, 0, sizeof(a));
    }
}
