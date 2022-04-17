#include <iostream>
#include <algorithm>
using namespace std;

int N, res;
int graph[501][501];
int dp[501][501];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int DFS(int x, int y) {
    if (dp[x][y]) return dp[x][y];
    dp[x][y] = 1;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (0 <= nx && 0 <= ny && nx < N && ny < N && graph[x][y] < graph[nx][ny]) {
            dp[x][y] = max(dp[x][y], DFS(nx, ny) + 1);
        }
    }
    return dp[x][y];
}


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> graph[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            res = max(res, DFS(i, j));
        }
    }
    cout << res << "\n";
    return 0;
}
