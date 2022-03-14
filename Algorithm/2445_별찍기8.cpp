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
        for(int j = 0; j < 2 * (N - i - 1); j++){
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 1; i < N; i++){
        for(int j = 0; j < N - i; j++){
            cout << "*";
        }
        for(int j = 0; j < 2 * i; j++){
            cout << " ";
        }
        for(int j = 0; j < N - i; j++){
            cout << "*";
        }
        cout << "\n";
    }
}
