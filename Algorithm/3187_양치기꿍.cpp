#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

int R, C, res = 0, wolf = 0, sheep = 0;
char a[251][251];
int visited[251][251];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

queue <pair<int, int>> q;

void BFS(int y, int x){
    int w = 0, s = 0;
    q.push({y, x});
    if(a[y][x] == 'k'){
        s++;
    }
    if(a[y][x] == 'v'){
        w++;
    }
    visited[y][x] = 1;
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < C && ny < R && (a[ny][nx] == '.' || a[ny][nx] == 'v' || a[ny][nx] == 'k') && visited[ny][nx] == 0){
                if(a[ny][nx] == 'k'){
                    s++;
                }
                if(a[ny][nx] == 'v'){
                    w++;
                }
                visited[ny][nx] = 1;
                q.push({ny, nx});
            }
        }
    }
    if(s > w && s > 0){
        sheep += s;
    }
    else if(s <= w && w > 0){
        wolf += w;
    }
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        cin >> s;
        for(int j = 0; j < C; j++){
            a[i][j] = s[j];
        }
    }
    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            if((a[i][j] == '.' || a[i][j] == 'v' || a[i][j] == 'k') && visited[i][j] == 0){
                BFS(i, j);
            }
        }
    }
    cout << sheep << " " << wolf << "\n";
}
