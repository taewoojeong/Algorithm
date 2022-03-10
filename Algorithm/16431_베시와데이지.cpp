#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int Br, Bc, Dr, Dc, Jr, Jc, Bt, Dt;
    cin >> Br >> Bc >> Dr >> Dc >> Jr >> Jc;
    
    Bt = max(abs(Jr - Br), abs(Jc - Bc));
    Dt = abs(Jr - Dr) + abs(Jc - Dc);
    if (Bt < Dt) {
        cout << "bessie" << endl;
    }
    else if (Bt > Dt) {
        cout << "daisy" << endl;
    }
    else {
        cout << "tie" << endl;
    }
    return 0;
}
