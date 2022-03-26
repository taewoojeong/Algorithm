#include <iostream>
using namespace std;

int N;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N - 1; i++){
        for(int j = 0; j < N - i - 1; j++){
            cout << " ";
        }
        cout << "*";
        if(i > 0){
            for(int j = 0; j < 2 * i - 1; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 0; i < 2 * N - 1; i++) {
        cout << "*";
    }
    return 0;
}
