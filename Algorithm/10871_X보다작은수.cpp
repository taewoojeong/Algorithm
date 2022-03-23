#include <iostream>
using namespace std;

int N, X, num;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N >> X;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(num < X) cout << num << " ";
    }
    return 0;
}
