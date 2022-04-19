#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int N, A, B, C, res = 0;
int inDegree[10100];
int hour[10100];
int money[10100];
vector <int> v[10100];
queue <int> q;

void topologySort() {
    for(int i = 1; i <= N; i++){
        if(inDegree[i] == 0){
            q.push(i);
            money[i] = hour[i];
        }
    }
    while(!q.empty()){
        int now = q.front();
        q.pop();
        
        for(int i = 0; i < v[now].size(); i++){
            if(--inDegree[v[now][i]] == 0){
                q.push(v[now][i]);
            }
            money[v[now][i]] = max(money[v[now][i]], money[now] + hour[v[now][i]]);
        }
    }
    for(int i = 1; i <= N; i++){
        res = max(res, money[i]);
    }
    cout << res << "\n";
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> A >> B;
        hour[i] = A;
        for(int j = 0; j < B; j++){
            cin >> C;
            v[C].push_back(i);
            inDegree[i]++;
        }
    }
    topologySort();
    return 0;
}
