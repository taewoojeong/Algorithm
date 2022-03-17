#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    double A, B, C, D, N[4];
    double res = 0;
    int K;
    cin >> A >> B >> C >> D;
    N[0] = A / C + B / D;
    N[1] = C / D + A / B;
    N[2] = D / B + C / A;
    N[3] = B / A + D / C;
    for(int i = 0; i < 4; i++){
        if(res != max(res, N[i])){
            res = max(res, N[i]);
            K = i;
        }
    }
    cout << K << "\n";
    return 0;
}
