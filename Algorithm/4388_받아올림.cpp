#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s1, s2;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true) {
        int carry = 0;
        cin >> s1 >> s2;
        int res = 0;
        if(s1 == s2 && s2 == "0") break;
        if(s1.size() < s2.size()) swap(s1, s2);
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        for(int i = 0; i < s2.size(); i++) {
            int sum = s1[i] + s2[i] - 2 * '0' + carry;
            if(sum >= 10) {
                s1[i] = sum - 10;
                s1[i + 1]++;
                carry = 1;
                res++;
            } else {
                carry = 0;
            }
        }
        carry = 0;
        for(int i = 0; i < s1.size(); i++) {
            int sum = s1[i] + carry - '0';
            if(sum >= 10) {
                carry = 1;
                res++;
            } else {
                carry = 0;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
