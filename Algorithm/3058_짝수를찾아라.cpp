#include <iostream>
#include <algorithm>

using namespace std;

int T, num;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        int minimum = 100, sum = 0;
        for(int i = 0; i < 7; i++) {
            cin >> num;
            if(num % 2 == 0) {
                sum += num;
                minimum = min(minimum, num);
            }
        }
        cout << sum << " " << minimum << "\n";
    }
    return 0;
}
