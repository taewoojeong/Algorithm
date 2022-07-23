#include <iostream>
#include <string>
#include <regex>
#include <algorithm>

using namespace std;

string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    while(getline(cin, s)) {
        while(s.find("BUG") != -1) {
            s = regex_replace(s, regex("BUG"),  "");
        }
        cout << s << "\n";
    }
}

