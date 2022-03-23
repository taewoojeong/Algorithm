#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    vector <int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    cout << v[0] << " " << v[N - 1] << "\n";
    return 0;
}
