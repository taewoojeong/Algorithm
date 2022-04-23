#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int rain[101][101];
int a[101][101];
int visited[101][101];
int N, num,res = 0, low = 101, high = 0;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

queue <pair<int, int>> q;

void BFS(int x, int y){
    q.push({x, y});
    visited[x][y]++;
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= N || ny < 0 || ny >= N){
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
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> rain[i][j];
            low = min(low, rain[i][j]);
            high = max(high, rain[i][j]);
        }
    }
    
    for(int k = low - 1; k < high; k++){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(rain[i][j] > k){
                    a[i][j] = 1;
                }
                else{
                    a[i][j] = 0;
                }
            }
        }
        int cnt = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                if(!visited[i][j] && a[i][j] == 1){
                    BFS(i,j);
                    cnt++;
                }
            }
        }
        res = max(res, cnt);
        memset(visited, 0, sizeof(visited));
    }
    cout << res << "\n";
    return 0;
}
