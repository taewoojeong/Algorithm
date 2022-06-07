#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string str, res = "";

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> str;
    res += str[0];
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '-') res += str[i + 1];
    }
    cout << res << "\n";
    return 0;
}
