#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, visited[10], ans[10], num;
vector <int> v;

void permutation(int index){
    if(index == M){
        for(int i = 0; i < M; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    for(int i = 0; i < v.size(); i++){
        ans[index] = v[i];
        permutation(index + 1);
        ans[index] = 0;
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
    v.erase(unique(v.begin(), v.end()), v.end());
    permutation(0);
}
