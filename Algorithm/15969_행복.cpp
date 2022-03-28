#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, num;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    vector <int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    cout << v[N - 1] - v[0] << "\n";
}
