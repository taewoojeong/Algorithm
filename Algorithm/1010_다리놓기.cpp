#include <iostream>

using namespace std;
int T, N, M;
int DP[31][31];
int bridge(int M, int N) {
    if(N == 0 || N == M) return 1;
    if(DP[M][N] == 0) return DP[M][N] = bridge(M - 1, N - 1) + bridge(M - 1, N);
    else return DP[M][N];
}

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> T;
    while(T--){
        cin >> N >> M;
        cout << bridge(M, N) << "\n";
    }
}
