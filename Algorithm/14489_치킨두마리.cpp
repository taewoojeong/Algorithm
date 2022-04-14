#include <iostream>
using namespace std;

int A, B, C;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> A >> B >> C;
    if(A + B >= 2 * C){
        cout << A + B - 2 * C << "\n";
    }
    else {
        cout << A + B << "\n";
    }
    return 0;
}
