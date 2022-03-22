#include <iostream>
using namespace std;

int N, A, B, c = 100, s = 100;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i  < N; i++){
        cin >> A >> B;
        if(A > B){
            s -= A;
        }
        if(A < B){
            c -= B;
        }
    }
    cout << c << " " << s << "\n";
    return 0;
}
