#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double L, A, B, C, D;
    cin >> L >> A >> B >> C >> D;
    cout << L - max(ceil(A / C), ceil(B / D));
}
