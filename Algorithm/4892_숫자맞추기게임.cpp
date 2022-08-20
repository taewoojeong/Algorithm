#include <iostream>
using namespace std;

int T, n0, n1, n2, n3, n4;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 1;; i++) {
        cin >> n0;
        if (n0 == 0) break;
        n1 = 3 * n0;
        cout << i << ". ";
        if (n1 % 2){
            cout << "odd ";
            n2 = (n1 + 1) / 2;
        } else {
            cout << "even ";
            n2 = n1 / 2;
        }
        n3 = 3 * n2;
        n4 = n3 / 9;
        cout << n4 << "\n";
    }
    return 0;
}
