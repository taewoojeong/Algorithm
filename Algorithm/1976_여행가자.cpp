#include <iostream>

using namespace std;

int N, M, num, a, b;
int parent[1000001];
int res[1000001];

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
    cin >> N >> M;
    for(int i = 1; i <= N; i++){
        parent[i] = i;
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++){
            cin >> num;
            if(num == 1) unionParent(i, j);
        }
    }
    for(int i = 0; i < M; i++){
        cin >> res[i];
    }
    for(int i = 1; i < M; i++){
        if(findParent(res[i], res[i - 1]) == 0){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
