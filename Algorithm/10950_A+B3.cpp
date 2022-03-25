#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T, A, B;
    cin >> T;
    while(T--){
        cin >> A >> B;
        cout << A + B << "\n";
    }
    return 0;
}
