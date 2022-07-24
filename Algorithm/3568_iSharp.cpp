#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

string s, type, pType, name;
vector<pair<string, string>> v;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    getline(cin, s);
    for(int i = 0 ; ; i++) {
        if(s[i] == ' ') {
            s = s.substr(i + 1);
            break;
        }
        type += s[i];
    }
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '&' || s[i] == '*') pType += s[i];
        else if(s[i] == '[') {
            pType += "][";
            i++;
        }
        else if(s[i] == ',' || s[i] == ';') {
            reverse(pType.begin(), pType.end());
            v.push_back({pType, name});
            pType = "";
            name = "";
        }
        else if(s[i] != ' ') name += s[i];
    }
    for(int i = 0; i < v.size(); i++) {
        cout << type << v[i].first << " " << v[i].second << ";\n";
    }
    return 0;
}
