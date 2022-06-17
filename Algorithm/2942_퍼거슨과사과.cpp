#include <iostream>

using namespace std;

int R, G, num;
int GCD(int a, int b) {
    if(b == 0) return a;
    return GCD(b, a % b);
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> R >> G;
    num = GCD(R, G);
    for(int i = 1; i <= num; i++) {
        if(num % i == 0) cout << i << " " << R / i << " " << G / i << "\n";
    }
    return 0;
}
