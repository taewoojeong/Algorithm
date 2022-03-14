#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, M = 0, N1;
    cin >> N;
    N1 = N;
    for (int i = 0; i < N1; i++) {
        for (int j = 0; j < M; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * N - 1 && N >= 0; j++) {
            cout << "*";
        }
        N--;
        M++;
        cout << "\n";
    }
    N += 2;
    M--;
    for (int i = 0; i < N1 - 1; i++) {
        for (int j = 0; j < M - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * N - 1 && M >= 0; j++) {
            cout << "*";
        }
        N++;
        M--;
        cout << "\n";
    }
}
