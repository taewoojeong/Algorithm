#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

double n, before;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cout << fixed;
    cout.precision(2);
    for(int i = 0;; i++) {
        cin >> n;
        if(n == 999) break;
        if(i != 0) {
            cout << n - before << "\n";
        }
        before = n;
    }
    return 0;
}
