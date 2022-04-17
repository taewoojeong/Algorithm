#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector <char> v;

int R, C, res = 0;
char board[20][20];
int visited[20][20];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
string s;

void DFS(int x, int y){
    v.push_back(board[x][y]);
    visited[x][y] = 1;
    res = max(res, (int)v.size());
    for(int i = 0; i < 4; i++){
        int cnt = 0;
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(visited[nx][ny] == 1){
            continue;
        }
        for(int i = 0; i < v.size(); i++){
            if(v[i] == board[nx][ny]){
                cnt++;
                break;
            }
        }
        if(0 <= nx && 0 <= ny && nx < R && ny < C && cnt == 0){
            DFS(nx, ny);
            visited[nx][ny] = 0;
            v.pop_back();
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> R >> C;
    for(int i = 0; i < R; i++){
        cin >> s;
        for(int j = 0; j < C; j++){
            board[i][j] = s[j];
        }
    }
    DFS(0, 0);
    cout << res << "\n";
    return 0;
}
