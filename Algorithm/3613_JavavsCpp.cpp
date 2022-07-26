#include <iostream>
#include <string>

using namespace std;

string s, res = "";
int underline, upper;
bool flag = false;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '_') {
            underline++;
            if(i == 0) flag = true;
            if(i < s.size() - 1 && s[i + 1] == '_') flag = true;
            if(i == s.size() - 1) flag = true;
        }
        else if('A' <= s[i] && s[i] <= 'Z'){ upper++;
            if(i == 0) flag = true;
        }
    }
    if(underline == upper && upper == 0) {
        cout << s << "\n";
    }
    else if((underline && upper) || flag) cout << "Error!\n";
    else if(underline) {
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '_' && i != s.size() - 1) s[i + 1] -= 32;
            else res += s[i];
        }
        cout << res << "\n";
    }else if(upper) {
        for(int i = 0; i < s.size(); i++ ){
            if('A' <= s[i] && s[i] <= 'Z') {
                res += '_';
                res += s[i] + 32;
            }
            else {
                res += s[i];
            }
        }
        cout << res << "\n";
    }
    return 0;
}
