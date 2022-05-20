#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int res = 1;
    cin >> s;
    if(s.size() > 1){
        for(int i = (int)s.size() - 1; i >= s.size() / 2; i--){
            int cnt = 1, cnt1 = 0;
            for(int j = 1; j <= s.size() - i - 1; j++){
                if(s[i + j] == s[i - j]) cnt += 2;
                else {
                    cnt = 0;
                    break;
                }
            }
            for(int j = 1; j <= s.size() - i; j++){
                if(s[i + j - 1] == s[i - j]) cnt1 += 2;
                else {
                    cnt1 = 0;
                    break;
                }
            }
            res = max({res, cnt, cnt1});
        }
        cout << 2 * s.size() - res << "\n";
    } else {
        cout << 1 << "\n";
    }
    return 0;
}
