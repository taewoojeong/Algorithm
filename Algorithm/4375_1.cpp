#include <iostream>

using namespace std;

int N;
string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(cin >> N) {
        int tmp = 0;
        for (int i = 1; i <= N; i++) {
            tmp = tmp * 10 + 1;
            tmp %= N;
            if (tmp == 0) {
                cout << i << "\n";
                break;
            }
        }
    }
    return 0;
}
