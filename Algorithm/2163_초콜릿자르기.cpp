#include <iostream>

using namespace std;

int N, M;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> M;
    cout << N * M - 1 << "\n";
}
