#include <iostream>
#include <queue>
#include <cstring>
#include <vector>
using namespace std;

int T, V, E;
vector <int> graph[20001];
int visited[20001];

void BFS(int start){
    queue <int> q;
    int color = 1;
    
    visited[start] = color;
    q.push(start);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        
        if(visited[now] == 1){
            color = 2;
        }
        else if(visited[now] == 2){
            color = 1;
        }
        int gsize = graph[now].size();
        for (int i = 0; i < gsize; i++) {
            int next = graph[now][i];
            if (!visited[next]) {
                visited[next] = color;
                q.push(next);
            }
        }
    }
}

bool isBipartiteGraph() {
    for(int i = 1; i <= V; i++){
        int gsize = graph[i].size();
        for(int j = 0; j < gsize; j++){
            int next = graph[i][j];
            if(visited[i] == visited[next]){
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--){
        cin >> V >> E;
        for(int i = 0; i < E; i++){
            int f, s;
            cin >> f >> s;
            graph[f].push_back(s);
            graph[s].push_back(f);
        }
        for (int i = 1; i <= V; i++) {
            if (!visited[i]) {
                BFS(i);
            }
        }
        if(isBipartiteGraph()){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        for (int i = 0; i <= V; i++) {
            graph[i].clear();
        }
        memset(visited, false, sizeof(visited));
    }
}
