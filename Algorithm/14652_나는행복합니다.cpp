#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M, K;
    cin >> N >> M >> K;
    cout << K / M << " " << K % M;
}
