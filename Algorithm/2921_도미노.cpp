#include <iostream>
using namespace std;

int N, sum;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++) {
        for(int j = 0; j <= i; j++) {
            sum += j + i;
        }
    }
    cout << sum << "\n";
    return 0;
}
