#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, n;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> n;
        vector<int> v;
        v.push_back(n);
        while(n != 1) {
            if(n % 2) {
                n = n * 3 + 1;
            }
            else {
                n /= 2;
            }
            v.push_back(n);
        }
        sort(v.rbegin(), v.rend());
        cout << v[0] << "\n";
    }
    return 0;
}
