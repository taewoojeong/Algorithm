#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int N, M, res = 0;
int a[100][100];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1 ,0, 1};
int checked[100][100];
int visited[100][100];
bool flag = true;

queue <pair<int, int>> q;

void BFS(){
    int cnt = 0;
    q.push({0,0});
    visited[0][0] = 1;
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 > nx || 0 > ny || nx >= M || ny >= N){
                continue;
            }
            if(a[ny][nx] == 0 && visited[ny][nx] == 0){
                q.push({ny, nx});
                visited[ny][nx] = 1;
            }
            else if(a[ny][nx] == 1){
                checked[ny][nx]++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0;j < M; j++){
            if(checked[i][j] > 1){
                a[i][j] = 0;
                cnt++;
            }
        }
    }
    if(cnt == 0){
        flag = false;
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }
    while(flag){
        BFS();
        res++;
        memset(checked, 0, sizeof(checked));
        memset(visited, 0, sizeof(visited));
    }
    cout << res - 1<< "\n";
    return 0;
}
