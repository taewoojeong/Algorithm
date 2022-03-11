#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    if(M < 3){
        cout << "NEWBIE!\n";
    }
    else if(M < N + 1){
        cout << "OLDBIE!\n";
    }
    else {
        cout << "TLE!\n";
    }
    return 0;
}
