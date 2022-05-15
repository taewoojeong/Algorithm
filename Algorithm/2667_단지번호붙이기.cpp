#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int a[101][101];
int dist[101][101];
int N, cnt = 0;
vector <int> home;
queue <pair<int, int>> q;

void BFS(int x, int y){
    q.push({x, y});
    dist[x][y]++;
    home.push_back(0);
    while(!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        home[cnt]++;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 1 || nx > N || ny < 1 || ny > N){
                continue;
            }
            if(dist[nx][ny] == 0 && a[nx][ny] == 1){
                q.push({nx, ny});
                dist[nx][ny] = dist[x][y] + 1;
            }
        }
    }
    cnt++;
}

int main(int argc, char *argv[]) {
   ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    string s;
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> s;
        for(int j = 1; j <= N; j++){
            a[i][j] = s[j - 1] - 48;
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            if(!dist[i][j] && a[i][j] == 1){
                BFS(i,j);
            }
        }
    }
    cout << cnt << "\n";
    sort(home.begin(), home.end());
    for(int i = 0; i < cnt; i++){
        cout << home[i] << "\n";
    }
}
