#include <iostream>

using namespace std;

int GCD(int A, int B) {
    int temp;
    while(B) {
        temp = A % B;
        A = B;
        B = temp;
    }
    return A;
}

int N, a, b;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> a >> b;
        cout << (a * b) / GCD(a, b) << " " << GCD(a, b) << "\n";
    }
    return 0;
}
