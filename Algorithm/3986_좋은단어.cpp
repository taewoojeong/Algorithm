#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N, cnt = 0;
    cin >> N;
    stack <char> s;
    for(int i = 0; i < N; i++){
        string str;
        cin >> str;
        for(int j = 0; j < str.size(); j++){
            if(s.empty() || s.top() != str[j]){
                s.push(str[j]);
            }
            else if(!s.empty() && s.top() == str[j]){
                s.pop();
            }
        }
        if(s.empty()){
            cnt++;
        }
        else{
            while(!s.empty()){
                s.pop();
            }
        }
    }
    cout << cnt;
}
