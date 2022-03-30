#include <iostream>
using namespace std;

int N, M, visited[10], ans[10];

void permutation(int index, int pre){
    if(index == M){
        for(int i = 0; i < M; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = pre + 1; i <= N; i++){
        if(!visited[i]){
            visited[i] = true;
            ans[index] = i;
            permutation(index + 1, i);
            visited[i] = false;
            ans[index] = 0;
        }
    }
    return;
}

int main(int argc, const char * argv[]) {
    cin >> N >> M;
    permutation(0, 0);
}
