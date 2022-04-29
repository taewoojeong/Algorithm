#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, M, T;
int inDegree[1001];
vector <int> v[1001];
vector <int> res;
queue <int> q;

void topologySort() {
    for(int i = 1; i <= N; i++){
        if(inDegree[i] == 0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int now = q.front();
        q.pop();
        res.push_back(now);
        for(int i = 0; i < v[now].size(); i++){
            if(--inDegree[v[now][i]] == 0){
                q.push(v[now][i]);
            }
        }
    }
    if(res.size() == N){
        for(int i = N - 1; i >= 0; i--){
            cout << res[i] << "\n";
        }
    }
    else {
        cout << 0 << "\n";
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M;
    while(M--){
        cin >> T;
        int K[1001];
        for(int i = 0; i < T; i++){
            cin >> K[i];
        }
        for(int i = 0; i < T; i++){
            for(int j = i + 1; j < T; j++){
                v[K[j]].push_back(K[i]);
                inDegree[K[i]]++;
            }
        }
    }
    topologySort();
    return 0;
}
