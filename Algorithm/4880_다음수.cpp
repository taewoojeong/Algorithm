#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int A, B, C;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true) {
        cin >> A >> B >> C;
        if(A == B && B == C && C == 0) break;
        if(C + A == B * 2) {
            cout << "AP " << C + B - A << "\n";
        } else {
            cout << "GP " << C * B / A << "\n";
        }
    }
    return 0;
}
