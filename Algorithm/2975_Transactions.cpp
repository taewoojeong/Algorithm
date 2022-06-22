#include <iostream>
#include <cmath>
using namespace std;

int A, B;
char oper;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true) {
        cin >> A >> oper >> B;
        if(A == B && B == 0) {
            break;
        }
        if(oper == 'W') {
            if(A - B >= -200) cout << A - B << "\n";
            else cout << "Not allowed\n";
        } else if(oper == 'D') {
            if(A + B >= -200) cout << A + B << "\n";
            else cout << "Not allowed\n";
        }
    }
    return 0;
}
