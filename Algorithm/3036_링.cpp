#include <iostream>

using namespace std;

int N, res, a[101];

int GCD(int a, int b){
    if(b == 0) return a;
    return GCD(b, a % b);
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    for(int i = 1; i < N; i++){
        if(a[0] > a[i]) res = GCD(a[0], a[i]);
        else res = GCD(a[i], a[0]);
        cout << a[0] / res << "/" << a[i] / res << "\n";
    }
}
