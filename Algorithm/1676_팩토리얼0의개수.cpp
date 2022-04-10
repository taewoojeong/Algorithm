#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int res = 0;
    int n;
    cin >> n;
    for(int i = 5; i <= n; i *= 5){
        res += n / i;
    }
    cout << res << "\n";
}
