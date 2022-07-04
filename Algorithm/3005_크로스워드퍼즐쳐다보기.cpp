#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int R, C;
char c[20][20];
vector<string> v;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> R >> C;
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            cin >> c[i][j];
        }
    }
    for(int i = 0; i < R; i++) {
        string s = "";
        for(int j = 0; j < C; j++) {
            if(c[i][j] != '#') s += c[i][j];
            if(c[i][j] == '#' || j == C - 1) {
                if(s.size() > 1) v.push_back(s);
                s = "";
            }
        }
        if(s.size() > 1) v.push_back(s);
    }
    for(int i = 0; i < C; i++) {
        string s = "";
        for(int j = 0; j < R; j++) {
            if(c[j][i] != '#') s += c[j][i];
            else {
                if(s.size() > 1)  v.push_back(s);
                s = "";
            }
        }
        if(s.size() > 1) v.push_back(s);
    }
    sort(v.begin(), v.end());
    cout << v[0] << "\n";
    return 0;
}
