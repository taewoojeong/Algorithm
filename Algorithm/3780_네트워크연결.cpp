#include <iostream>
#include <algorithm>
using namespace std;

int T, N, A, B;
int parent[20001];
int dist[20001];
char c;

int getParent(int x) {
    if(parent[x] == x) return x;
    int idx = getParent(parent[x]);
    dist[x] += dist[parent[x]];
    return parent[x] = idx;
}

void unionParent(int a, int b) {
    dist[a] = abs(a - b) % 1000;
    parent[a] = b;
}
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> T;
    while(T--){
        cin >> N;
        for(int i = 1; i <= N; i++){
            parent[i] = i;
            dist[i] = 0;
        }
        while(true) {
            cin >> c;
            if(c == 'O') break;
            else if( c == 'E') {
                cin >> A;
                getParent(A);
                cout << dist[A] << "\n";
            }
            else if (c == 'I') {
                cin >> A >> B;
                unionParent(A, B);
            }
        }
    }
    return 0;
}
