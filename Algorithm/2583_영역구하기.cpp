#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

int a[1001][1001];
int res[1001][1001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};
int M, N, K, cnt = 0;

queue <pair<int,int>> q;
vector <int> v;
int BFS(int x, int y){
    q.push({x, y});
    a[x][y] = 1;
    int area = 0;
    
    while(!q.empty()){
        int x = q.front().second;
        int y = q.front().first;
        q.pop();
        area++;
        for(int i = 0; i < 4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && 0 <= ny && nx < N && ny < M && a[ny][nx] == 0){
                a[ny][nx] = 1;
                q.push({ny, nx});
            }
        }
    }
    return area;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> M >> N >> K;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            a[i][j] = 0;
        }
    }
    for(int i = 0; i < K; i++){
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j = y1; j < y2; j++){
            for(int k = x1; k < x2; k++){
                a[j][k] = 1;
            }
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(!a[i][j]){
                v.push_back(BFS(i, j));
                cnt++;
            }
        }
    }
    
    sort(v.begin(), v.end());
    cout << cnt << "\n";
    for(int i = 0; i < cnt; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    return 0;
}
