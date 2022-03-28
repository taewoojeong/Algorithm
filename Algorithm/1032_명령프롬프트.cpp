#include <iostream>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    string s1, s2;
    cin >> s1;
    for(int i = 0; i < N - 1; i++){
        cin >> s2;
        for(int j = 0; j < s1.size(); j++){
            if(s1[j] != s2[j]){
                s1[j] = '?';
            }
        }
    }
    cout << s1;
}
