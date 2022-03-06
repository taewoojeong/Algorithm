#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A, B, C, D, P;
    cin >> A >> B >> C >> D >> P;
    if(P >= C){
        A * P <= B + (P - C) * D ? cout << A * P : cout << B + (P - C) * D;
    }
    else{
        A * P <= B ? cout << A * P : cout << B;
    }
}
