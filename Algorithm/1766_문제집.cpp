#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M, inDegree[32001], hour[32001], res[32001];
vector<int> a[32001];

void topologySort(){
    priority_queue <int, vector<int>, greater<int>> q;
    for(int i = 1; i <= N; i++){
        if(inDegree[i] == 0){
            q.push(i);
        }
    }
    for(int i = 1; i <= N; i++){
        int x = q.top();
        q.pop();
        res[i] = x;
        for(int j = 0; j < a[x].size(); j++){
            int y = a[x][j];
            if(--inDegree[y] == 0){
                q.push(y);
            }
        }
    }
    for(int i = 1; i <= N; i++){
        cout << res[i] << " ";
    }
}


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        a[x].push_back(y);
        inDegree[y]++;
    }
    topologySort();
    return 0;
}
