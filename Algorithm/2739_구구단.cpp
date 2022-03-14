#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < 9; i++){
        cout << N << " * " << i + 1 << " = " << N * (i + 1) << "\n";
    }
}
