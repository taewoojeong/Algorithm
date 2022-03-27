#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int cnt = 1;
    string s;
    getline(cin, s);
    if(s.empty()){
        cout << "0";
    }
    else {
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' ') cnt++;
        }
        if(s[0] == ' ') cnt--;
        if(s[s.length() - 1] == ' ') cnt--;
        cout << cnt << "\n";
    }
    return 0;
}
