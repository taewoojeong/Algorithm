#include <iostream>

using namespace std;

int n, m, num, a, b;
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
    return 0;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
    for(int i = 0; i < m; i++){
        cin >> num >> a >> b;
        if(num == 0) unionParent(a, b);
        else if(findParent(a, b) == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
