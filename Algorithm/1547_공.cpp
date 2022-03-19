#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int M, ball = 1, X, Y;
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> X >> Y;
        if(ball == X) ball = Y;
        else if(ball == Y) ball = X;
    }
    cout << ball << "\n";
}
