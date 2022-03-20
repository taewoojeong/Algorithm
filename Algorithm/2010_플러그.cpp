#include <iostream>

using namespace std;

int N, res = 1, num;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        res += num - 1;
    }
    cout << res << "\n";
}
