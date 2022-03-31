#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, visited[10], ans[10], num;
vector <int> v;

void permutation(int index, int num){
    if(index == M){
        for(int i = 0; i < M; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = num; i <= N; i++){
        if(!visited[i]){
            ans[index] = v[i - 1];
            permutation(index + 1, i);
            ans[index] = 0;
        }
    }
    return;
}

int main(int argc, const char * argv[]) {
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    permutation(0, 1);
}
