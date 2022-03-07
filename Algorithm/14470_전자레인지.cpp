#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int A, B, C, D, E, res = 0;
    cin >> A >> B >> C >> D >> E;
    if(A < 0){
        res += -1 * A * C;
        res += D;
        res += E * B;
    }
    else{
        res += (B - A) * E;
    }
    cout << res << "\n";
    return 0;
}
