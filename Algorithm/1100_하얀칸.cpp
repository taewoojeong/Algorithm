#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int res = 0;
    string s[8];
    for(int i = 0; i < 8; i++){
        cin >> s[i];
    }
    for(int i = 0; i < 8; i++){
        for(int j = i % 2; j < 8; j += 2){
            if(s[i][j] == 'F') res++;
        }
    }
    cout << res << "\n";
    return 0;
}
