#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <char> v;
int L, C;
bool visited[17] = {0};

void permutation(int index, int cur){
    if(index == L){
        int m = 0, j = 0;
        for (int i = 0; i < v.size(); i++) {
            if (visited[i]) {
                if (v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u')
                    m++;
                else
                    j++;
            }
        }
        if(j >= 2 && m >= 1){
            for(int i = 0; i < v.size(); i++){
                if(visited[i]){
                    cout << v[i];
                }
            }
            cout << "\n";
        }
        return;
    }
    for(int i = cur; i < v.size(); i++){
        if(!visited[i]){
            visited[i] = true;
            permutation(index + 1, i);
            visited[i] = false;
        }
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> L >> C;
    for(int i = 0; i < C; i++){
        char c;
        cin >> c;
        v.push_back(c);
    }
    sort(v.begin(), v.end());
    permutation(0, 0);
}
