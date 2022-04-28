#include <iostream>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;


int tresure[51][51];
int dist[51][51];
int M, N, res = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

queue <pair<int, int>> q;

int BFS(int x, int y){
    int cnt = 0;
    q.push({x, y});
    dist[y][x] = 1;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < N && ny < M && dist[ny][nx] == 0 && tresure[ny][nx] == 1){
                dist[ny][nx] = dist[y][x] + 1;
                q.push({nx, ny});
            }
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cnt = max(cnt, dist[i][j]);
        }
    }
    memset(dist, 0, sizeof(dist));
    return cnt - 1;
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    char c;
    cin >> M >> N;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> c;
            if(c == 'L'){
                tresure[i][j] = 1;
            }
            else{
                tresure[i][j] = 0;
            }
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(tresure[i][j] == 1){
                res = max(res, BFS(j, i));
            }
        }
    }
    cout << res << "\n";
    return 0;
}
