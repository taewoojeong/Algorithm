#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - i - 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
