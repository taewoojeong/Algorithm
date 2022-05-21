#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    vector<int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++){
        cout << v[i] << "\n";
    }
    return 0;
}
