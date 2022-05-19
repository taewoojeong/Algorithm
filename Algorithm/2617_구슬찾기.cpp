#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M, a, b, res = 0;

int graph[100][100];
int mid[100];

void floyd() {
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++){
                if(graph[i][k] == 1 && graph[k][j] == 1) graph[i][j] = 1;
                else if(graph[i][k] == -1 && graph[k][j] == -1) graph[i][j] = -1;
            }
        }
    }
}

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = -1;
    }
    floyd();
    for(int i = 1; i <= N; i++){
        int one = 0, minus = 0;
        for(int j = 1; j <= N; j++){
            if(graph[i][j] == 1) one++;
            else if(graph[i][j] == -1) minus++;
        }
        if(one > N / 2 || minus > N / 2) res++;
    }
    cout << res << "\n";
}
