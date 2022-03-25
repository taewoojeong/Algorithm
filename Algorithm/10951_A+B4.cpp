#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int A, B;
    while(!(cin >> A >> B).eof()){
        cout << A + B << "\n";
    }
    return 0;
}
