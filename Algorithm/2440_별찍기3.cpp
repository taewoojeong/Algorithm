#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N - i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
