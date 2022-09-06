#include <iostream>
#include <algorithm>
using namespace std;

int T;
string s1, s2;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> T;
    while(T--) {
        cin >> s1 >> s2;
        cout << "Distances: ";
        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] <= s2[i]) cout << s2[i] - s1[i] << " ";
            else cout << s2[i] - s1[i] + 26 << " ";
        }
        cout << "\n";
    }
    return 0;
}
