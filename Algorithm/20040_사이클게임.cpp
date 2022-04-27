#include <iostream>

using namespace std;

int n, m, a, b, res;
int parent[1000001];

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
    parent[a] = b;
    return 0;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        parent[i] = i;
    }
    for(int i = 1; i <= m; i++){
        cin >> a >> b;
        if(findParent(a, b)){
            res = i;
            break;
        }
    }
    cout << res << "\n";
    return 0;
}
