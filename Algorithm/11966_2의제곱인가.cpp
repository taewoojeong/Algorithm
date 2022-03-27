#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; (int)pow(2, i) <= N; i++){
        if(pow(2, i) == N){
            cout << 1 << "\n";
            return 0;
        }
    }
    cout << 0 << "\n";
    return 0;
}
