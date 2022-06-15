#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string s1, s2, oper;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s1 >> oper >> s2;
    
    if(oper == "*") {
        for(int i = 0; i < s2.size() - 1; i++) {
            s1 += '0';
        }
    } else {
        if(s1.size() < s2.size()) swap(s1, s2);
        s1[s1.size() - s2.size()]++;
    }
    cout << s1 << "\n";
    return 0;
}
