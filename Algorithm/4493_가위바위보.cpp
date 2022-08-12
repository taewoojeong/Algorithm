#include <iostream>

using namespace std;

int T, N;
char A, B;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> N;
        int p1 = 0, p2 = 0;
        for(int i = 0; i < N; i++) {
            cin >> A >> B;
            if(A == 'R') {
                if(B == 'S') p1++;
                else if(B == 'P') p2++;
            }
            else if(A == 'P') {
                if(B == 'R') p1++;
                else if(B == 'S') p2++;
            }
            else if(A == 'S') {
                if(B == 'P') p1++;
                else if(B == 'R') p2++;
            }
        }
        if(p1 > p2) cout << "Player 1\n";
        else if(p1 < p2) cout << "Player 2\n";
        else cout << "TIE\n";
    }
    return 0;
}
