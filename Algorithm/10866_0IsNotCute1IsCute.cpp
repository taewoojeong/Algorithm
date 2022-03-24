#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, num, zero = 0, one = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(num) one++;
        else zero++;
    }
    if(one > zero) cout << "Junhee is cute!\n";
    else cout << "Junhee is not cute!\n";
    return 0;
}
