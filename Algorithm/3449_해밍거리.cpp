#include <iostream>
#include <string>
using namespace std;

int T;
string s1, s2;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> s1 >> s2;
        int cnt = 0;
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] != s2[i]) cnt++;
        }
        cout << "Hamming distance is " << cnt << ".\n";
    }
    return 0;
}
