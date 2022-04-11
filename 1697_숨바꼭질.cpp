#include <iostream>
#include <queue>
using namespace std;

int a[100001];
int dist[100001];

int N, K;
queue <int> q;

void BFS(int x){
    q.push(x);
    dist[x] = 1;
    while(!q.empty()){
        x = q.front();
        q.pop();
        if(dist[x - 1] == 0&& x - 1 >= 0){
            q.push(x - 1);
            dist[x - 1] = dist[x] + 1;
        }
        if(dist[x + 1] == 0 && x + 1 <= 100000){
            q.push(x + 1);
            dist[x + 1] = dist[x] + 1;
        }
        if(dist[2 * x] == 0 && 2 * x <= 100000){
            q.push(2 * x);
            dist[2 * x] = dist[x] + 1;
        }
    }
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int N, K;
    cin >> N >> K;
    BFS(N);
    cout << dist[K] - 1;
}
