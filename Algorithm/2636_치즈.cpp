#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int R, C, res, hour = 0;
int a[100][100];
int visited[100][100];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};


bool BFS(){
    visited[0][0] = 1;
    int cnt = 0;
    queue <pair<int, int>> q;
    q.push({0, 0});
    hour++;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < R && ny < C && visited[nx][ny] == 0){
                if(a[nx][ny] == 0){
                    q.push({nx, ny});
                }
                else{
                    a[nx][ny] = 0;
                    cnt++;
                }
                visited[nx][ny] = 1;
            }
        }
    }
    if(cnt == 0){
        cout << --hour << "\n" << res;
        return false;
    }
    else{
        res = cnt;
        return true;
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            cin >> a[i][j];
        }
    }
    while(BFS()){
        memset(visited, 0, sizeof(visited));
    }
    return 0;
}
