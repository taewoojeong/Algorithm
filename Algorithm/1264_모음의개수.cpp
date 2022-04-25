#include <iostream>
#include <string>

using namespace std;

string s;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while(true){
        int res = 0;
        getline(cin, s);
        if(s == "#"){
            return 0;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                res++;
            }
        }
        cout << res << "\n";
    }
}
