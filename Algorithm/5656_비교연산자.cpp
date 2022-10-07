#include <iostream>
#include <string>

using namespace std;

int a, b;
string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 1;; i++) {
        cin >> a >> s >> b;
        if(!s.compare("E")) break;
        cout << "Case " << i << ": ";
        if(!s.compare("!=")) {
            if(a != b) cout << "true\n";
            else cout << "false\n";
        }
        else if(!s.compare("==")) {
            if(a == b) cout << "true\n";
            else cout << "false\n";
        }
        else if(!s.compare("<")) {
            if(a < b) cout << "true\n";
            else cout << "false\n";
        }
        else if(!s.compare(">")) {
            if(a > b) cout << "true\n";
            else cout << "false\n";
        }
        else if(!s.compare("<=")) {
            if(a <= b) cout << "true\n";
            else cout << "false\n";
        }
        else if(!s.compare(">=")) {
            if(a >= b) cout << "true\n";
            else cout << "false\n";
        }
    }
    return 0;
}
