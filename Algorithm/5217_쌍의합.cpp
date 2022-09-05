#include <iostream>
#include <algorithm>
using namespace std;

int T, N;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> N;
        cout << "Pairs for " << N << ": ";
        for(int i = 1; i < N / 2 + N % 2; i++) {
            if(i > 1) {
                cout << ", ";
            }
            cout << i << " " << N - i;
        }
        cout << "\n";
    }
    return 0;
}
