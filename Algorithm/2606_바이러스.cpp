#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int N, M, V;
int a[1001][1001];
bool visited[1001];

queue <int> q;

void DFS(int idx){
    cout << idx << " ";
    for(int i = 1; i <= N; i++){
        if(a[idx][i] && !visited[i]){
            visited[i] = 1;
            DFS(i);
        }
    }
}
int BFS(int idx){
    int cnt = 0;
    q.push(idx);
    visited[idx] = 1;
    
    while(!q.empty()){
        idx = q.front();
        q.pop();
        
        cnt++;
        for(int i = 1; i <= N; i++){
            if(a[idx][i] && !visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return cnt;
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int from, to;
        cin >> from >> to;
        a[from][to] = 1;
        a[to][from] = 1;
    }
    cout << BFS(1) - 1<< "\n";
    return 0;
}
