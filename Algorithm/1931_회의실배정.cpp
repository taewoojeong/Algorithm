#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, res = 0;


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    vector <pair<int,int>> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    int time = v[0].first;
    int cnt = 1;
    for(int i = 1; i < N; i++){
        if(time <= v[i].second){
            cnt++;
            time = v[i].first;
        }
    }
    cout << cnt << "\n";
    return 0;
}
