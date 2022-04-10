#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    map <string, int> m;
    vector <string> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        m.insert({v[i], i + 1});
    }
    for(int i = 0; i < M; i++){
        string str;
        cin >> str;
        if(str[0] <= '9' && str[0] >= '0'){
            cout << v[stoi(str) - 1] << "\n";
        }
        else{
            cout << m.find(str)->second << "\n";
        }
    }
    return 0;
}
