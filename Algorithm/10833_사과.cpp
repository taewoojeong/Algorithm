#include <iostream>
using namespace std;

int N, a, b;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    int sum = 0;
    for(int i = 0; i < N; i ++){
        cin >> a >> b;
        sum += b % a;
    }
    cout << sum;
    return 0;
}
