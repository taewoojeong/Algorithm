#include <iostream>
#include <string>
using namespace std;

string str = "";
int visited[51];

int permutation(string &s, int index){
    int cnt = 0;
    for(int i = index; i < s.size(); i++){
        if(s[i] == '(' && !visited[i]){
            visited[i] = 1;
            cnt--;
            cnt += (s[i - 1] - '0') * permutation(s, i + 1);
        }
        else if(s[i] == ')' && !visited[i]){
            visited[i] = 1;
            return cnt;
        }
        else if(!visited[i]){
            visited[i] = 1;
            cnt++;
        }
    }
    return cnt;
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> str;
    cout << permutation(str, 0);
}
