#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string str1, str2;
int h1, m1, s1, h2, m2, s2;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> str1 >> str2;
    h1 = stoi(str1.substr(0,2));
    m1 = stoi(str1.substr(3,2));
    s1 = stoi(str1.substr(6));
    h2 = stoi(str2.substr(0,2));
    m2 = stoi(str2.substr(3,2));
    s2 = stoi(str2.substr(6));
    s2 -= s1;
    if(s2 < 0) {
        s2 += 60;
        m2--;
    }
    m2 -= m1;
    if(m2 < 0) {
        m2 += 60;
        h2--;
    }
    h2 -= h1;
    if(h2 < 0) {
        h2 += 24;
    }
    if(h2 == m2 && m2 == s2 && s2 == 0) {
        cout << "24:00:00\n";
        return 0;
    }
    if(h2 < 10) cout << 0 << h2 << ":";
    else cout << h2 << ":";
    if(m2 < 10) cout << 0 << m2 << ":";
    else cout << m2 << ":";
    if(s2 < 10) cout << 0 << s2 << "\n";
    else cout << s2 << "\n";
    return 0;
}
