#include <iostream>
#include <string>
using namespace std;

string s1, s2;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s1 >> s2;
    if(s1.size() >= s2.size()) cout << "go\n";
    else cout << "no\n";
    return 0 ;
}
