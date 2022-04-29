#include <iostream>

using namespace std;


int GCD(int a, int b){
    if(b == 0) return a;
    return GCD(b, a % b);
}

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    cout << GCD(a, b) << "\n" << a * b / GCD(a, b) << "\n";
    return 0;
}
