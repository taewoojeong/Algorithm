#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, inDegree[501], hour[501], res[501];
vector<int> a[501];

void topologySort(){
    queue <int> q;
    for(int i = 1; i <= N; i++){
        if(inDegree[i] == 0){
            res[i] = hour[i];
            q.push(i);
        }
    }
    for(int i = 1; i <= N; i++){
        int x = q.front();
        q.pop();
        for(int j = 0; j < a[x].size(); j++){
            int y = a[x][j];
            res[y] = max(res[y], res[x] + hour[y]);
            if(--inDegree[y] == 0){
                q.push(y);
            }
        }
    }
    for(int i = 1; i <= N; i++){
        cout << res[i] << "\n";
    }
}


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> hour[i];
        while(1){
            int x;
            cin >> x;
            if(x == -1 ) break;
            inDegree[i]++;
            a[x].push_back(i);
        }
    }
    topologySort();
    return 0;
}
