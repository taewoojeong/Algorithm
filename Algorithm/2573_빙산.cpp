#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;

int N, M, res = 0;
int a[300][300];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int visited[300][300];

queue <pair<int, int>> q;
bool melt(){
    res++;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(a[i][j] == 0){
                q.push({i, j});
            }
        }
    }
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < M && ny < N && a[ny][nx] > 0){
                a[ny][nx]--;
                cnt++;
            }
        }
    }
    if(cnt > 0){
        return false;
    }
    else{
        return true;
    }
}

void BFS(int y, int x){
    q.push({y, x});
    visited[y][x] = 1;
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < M && ny < N && visited[ny][nx] == 0 && a[ny][nx] > 0){
                visited[ny][nx] = 1;
                q.push({ny, nx});
            }
        }
    }

}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }
    while(true){
        int cnt = 0;
        for(int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                if(visited[i][j] == 0 && a[i][j] > 0){
                    BFS(i, j);
                    cnt++;
                }
            }
        }
        if(cnt > 1){
            cout << res << "\n";
            break;
        }
        if(melt()){
            cout << 0 << "\n";
            break;
        }
        memset(visited, 0 , sizeof(visited));
    }
    return 0;
}
