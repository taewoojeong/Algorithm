#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    vector <int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[0] * v.back();
    return 0;
}
