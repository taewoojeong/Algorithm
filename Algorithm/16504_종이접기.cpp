#include <iostream>
using namespace std;

int N, num;
long long res = 0;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N * N; i++){
        cin >> num;
        res += num;
    }
    cout << res << "\n";
    return 0;
}
