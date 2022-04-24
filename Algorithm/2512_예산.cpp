#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, result;
vector <int> v;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }
    cin >> M;
    sort(v.begin(), v.end());
    int left = M / N, right = v[N - 1];
    while(left <= right){
        int mid = (left + right) / 2;
        int sum = 0;
        for(int i = 0; i < N; i++){
            sum += min(mid, v[i]);
        }
        if(sum > M){
            right = mid - 1;
        }
        else{
            result = mid;
            left = mid + 1;
        }
    }
    cout << result;
    return 0;
}
