#include <iostream>
#include <string>
using namespace std;

string s;
int N, cnt = 0;
int alpha[26];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        alpha[s[0] - 97]++;
    }
    for(int i = 0; i < 26; i++){
        if(alpha[i] > 4) {
            cout << (char)(i + 97);
            cnt++;
        }
    }
    if(cnt == 0) cout << "PREDAJA\n";
    
    return 0;
}
