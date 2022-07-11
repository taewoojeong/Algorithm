#include <iostream>
using namespace std;

int N, res, num[42];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 10; i++) {
        cin >> N;
        num[N % 42]++;
    }
    for(int i = 0; i < 42; i++) {
        if(num[i]) res++;
    }
    cout << res << "\n";
    return 0 ;
}
