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
        string s = "";
        while(n) {
            s += to_string(n % 2);
            n /= 2;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
