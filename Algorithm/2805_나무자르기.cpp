#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T, N, M, num, res = 0;
vector <int> v;
int binary_search(int first, int last){
    while(first <= last){
        int mid = (first + last) / 2;
        long long tree_total = 0;
        for(int i = 0; i < N; i++){
            if(v[i] - mid > 0)
                tree_total += v[i] - mid;
        }
        if(tree_total >= M){
            if(res < mid)
                res = mid;
            first = mid + 1;
        }
        else{
            last = mid - 1;
        }
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    cout << binary_search(1, v[N - 1]);
}
