#include <iostream>
#include <string>

using namespace std;

int T;
string X;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        int a[10] = {0}, cnt = 0;
        cin >> X;
        for(int i = 0; i < X.size(); i++) {
            a[X[i] - '0']++;
        }
        for(int i = 0; i < 10; i++) {
            if(a[i]) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
