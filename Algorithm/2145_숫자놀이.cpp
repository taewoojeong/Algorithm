#include <iostream>

using namespace std;

int N;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while(true){
        cin >> N;
        if(!N) return 0;
        while(N >= 10){
            N = N / 10000 + N % 10000 / 1000 + N % 1000 / 100 + N % 100 / 10 + N % 10;
        }
        cout << N << "\n";
    }
}
