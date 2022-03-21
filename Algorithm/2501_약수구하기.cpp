#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K;

vector <int> v;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        if(N % i == 0){
            v.push_back(i);
        }
    }
    if(K > v.size()) cout << 0 << "\n";
    else cout << v[K - 1];
}
