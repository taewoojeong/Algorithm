#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, i;
    cin >> N;
    for(i = 0; i < N; i++){
        N -= i;
    }
    if(i % 2 == 1)
        cout << i + 1 - N << "/" << N;
    else
        cout << N << "/" << i + 1 - N;
}
