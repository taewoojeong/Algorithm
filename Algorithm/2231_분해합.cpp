#include <iostream>
#include <string>
using namespace std;


int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 1; i < N; i++){
        if(N == i + i / 100000 + i % 100000 / 10000 + i % 10000 / 1000 + i % 1000 / 100 + i % 100 / 10 + i % 10){
            cout << i << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";
}
