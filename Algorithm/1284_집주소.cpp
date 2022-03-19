#include <iostream>
#include <string>
using namespace std;

string s;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    while(true){
        cin >> s;
        int res = (int)s.size() + 1;
        if(s[0] == '0'){
            break;
        }
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                res += 2;
            }
            else if(s[i] == '0'){
                res += 4;
            }
            else{
                res += 3;
            }
        }
        cout << res << "\n";
    }
}
