#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int alpha[26], maximum;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    while(cin >> s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                alpha[s[i] - 'a']++;
            }
        }
        s.clear();
    }
    for(int i = 0; i < 26; i++){
        maximum = max(maximum, alpha[i]);
    }
    for(int i = 0; i < 26; i++){
        if(alpha[i] == maximum) cout << (char)(i + 'a');
    }
    return 0;
}
