#include <iostream>
#include <string>

using namespace std;

char c;
string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while(true){
        int res = 0;
        cin >> c;
        if(c == '#') return 0;
        getline(cin, s);
        for(int i = 0; i < s.size(); i++){
            if(s[i] == c || s[i] == c + 32 || s[i] == c - 32) res++;
        }
        cout << c << " " << res << "\n";
    }
}
