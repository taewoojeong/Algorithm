#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
string s, res;
vector<string> v;

bool cmp(string a, string b) {
    if(a.size() == b.size()) return a < b;
    else return a.size() < b.size();
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s;
        res = "";
        for(int j = 0; j < s.size(); j++) {
            if('0' <= s[j] && s[j] <= '9') {
                res += s[j];
            } else if(!res.empty()) {
                for(int k = 0; k < res.size() - 1; k++) {
                    if(res[k] == '0') {
                        res = res.substr(1);
                        k--;
                    } else break;
                }
                v.push_back(res);
                res = "";
            }
        }
        if(!res.empty()) {
            for(int k = 0; k < res.size() - 1; k++) {
                if(res[k] == '0') {
                    res = res.substr(1);
                    k--;
                } else break;
            }
            v.push_back(res);
            res = "";
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
    return 0;
}
