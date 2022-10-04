#include <iostream>
#include <string>

using namespace std;

string s;
int length, maxLength;
string res;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(true) {
        cin >> s;
        string temp = "";
        if(s == "E-N-D") break;
        for(int i = 0; i < s.size(); i++){
            if(('A' <= s[i] && s[i] <= 'Z') || ('a' <= s[i] && s[i] <= 'z') || s[i] == '-') {
                temp += s[i];
            }
        }
        if(maxLength < temp.size()) {
            maxLength = (int)temp.size();
            res = temp;
        }
    }
    for(int i = 0; i < res.size(); i++) {
        if('A' <= res[i] && res[i] <= 'Z') res[i] += 32;
        cout << res[i];
    }
    return 0;
}
