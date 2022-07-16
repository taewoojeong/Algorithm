#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int R, C, hour, dpx, dpy;
string s;

queue <pair<int,int>> sq;
queue <pair<int,int>> wq;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int visited[51][51];
char graph[51][51];

bool BFS() {
    hour = 0;
    while(!sq.empty()){
        int wqsize = wq.size();
        int sqsize = sq.size();
        hour++;
        while(wqsize--){
            int x = wq.front().first;
            int y = wq.front().second;
            wq.pop();
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(0 <= nx && 0 <= ny && nx < R && ny < C && graph[nx][ny] != 'D' && graph[nx][ny] != 'X' && !visited[nx][ny]){
                    wq.push({nx, ny});
                    visited[nx][ny] = 1;
                }
            }
        }
        while(sqsize--){
            int x = sq.front().first;
            int y = sq.front().second;
            sq.pop();
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(0 <= nx && 0 <= ny && nx < R && ny < C && graph[nx][ny] != 'X' && !visited[nx][ny]){
                    sq.push({nx, ny});
                    visited[nx][ny] = 1;
                    if(nx == dpx && ny == dpy){
                        return true;
                    }
                }
            }
        }
    }
    return false;
}


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        cin >> s;
        for(int j = 0; j < C; j++){
            graph[i][j] = s[j];
            if(graph[i][j] == 'S'){
                sq.push({i, j});
                visited[i][j] = 1;
            }
            else if(graph[i][j] == '*'){
                wq.push({i, j});
                visited[i][j] = 1;
            }
            else if(graph[i][j] == 'D'){
                dpx = i;
                dpy = j;
            }
        }
    }
    if(BFS()){
        cout << hour << "\n";
    }
    else{
        cout << "KAKTUS\n";
    }
    return 0;
}
