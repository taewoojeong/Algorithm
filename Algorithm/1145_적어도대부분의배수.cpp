#include <iostream>

using namespace std;

int a[5];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for(int i = 1;; i++) {
        int cnt = 0;
        for(int j = 0; j < 5; j++) {
            if(i % a[j] == 0) cnt++;
        }
        if(cnt >= 3) {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}
