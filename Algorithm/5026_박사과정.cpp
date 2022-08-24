#include <iostream>
#include <string>

using namespace std;

int N;
string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++) {
        int res = 0, num = 0;
        cin >> s;
        s += " ";
        if(s[0] == 'P') {
            cout << "skipped\n";
            continue;
        }
        for(int j = 0; j < s.size(); j++) {
            if(s[j] == '+' || s[j] == ' ') {
                res += num;
                num = 0;
            } else {
                num *= 10;
                num += s[j] - '0';
            }
        }
        cout << res << "\n";
    }
    return 0;
}
