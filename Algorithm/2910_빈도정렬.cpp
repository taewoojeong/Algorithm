#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int N, C, num;
map<int,int> idx;
map<int,int> m;
vector<pair<int,int>> v;

bool cmp(pair<int,int> a, pair<int,int> b) {
    if(a.first == b.first) return idx[a.second] < idx[b.second];
    return a.first > b.first;
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> C;
    for(int i = 0; i < N; i++) {
        cin >> num;
        m[num]++;
        if(m[num] == 1) idx[num] = i + 1;
    }
    for(auto iter:m) {
        v.push_back({iter.second, iter.first});
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].first; j++) {
            cout << v[i].second << " ";
        }
    }
    return 0;
}
