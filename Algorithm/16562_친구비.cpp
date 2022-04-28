#include <iostream>
#include <algorithm>

using namespace std;

int N, M, k, v, w, sum;
int parent[1000001];
int res[10001] = { 10001 };
int cost[10001];


int getParent(int x){
    if(parent[x] == x) return x;
    return parent[x] = getParent(parent[x]);
}

void unionParent(int a, int b){
    a = getParent(a);
    b = getParent(b);
    if(a < b) parent[b] = a;
    else parent[a] = b;
}

int findParent(int a, int b){
    a = getParent(a);
    b = getParent(b);
    if(a == b) return 1;
    return 0;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M >> k;
    fill_n(res, N + 1, 10001);
    for(int i = 1; i <= N; i++){
        cin >> cost[i];
        parent[i] = i;
    }
    for(int i = 0; i < M; i++){
        cin >> v >> w;
        unionParent(v, w);
    }
    for(int i = 1; i <= N; i++){
        getParent(i);
        res[parent[i]] = min(res[parent[i]], cost[i]);
    }
    for(int i = 1; i <= N; i++){
        if(res[i] != 10001){
            sum += res[i];
        }
    }
    if(sum <= k) cout << sum << "\n";
    else cout << "Oh no\n";
    return 0;
}
