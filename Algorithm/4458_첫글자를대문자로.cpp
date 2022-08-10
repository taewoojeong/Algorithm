#include <iostream>

using namespace std;

int N;
string s;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    cin.ignore();
    while(N--) {
        getline(cin, s);
        if(s[0] > 96) s[0] -= 32;
        cout << s << "\n";
    }
    return 0 ;
}
