#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str;
    stack <char> s;
    long long res = 0;
    bool flag = true;
    int temp = 1;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            temp *= 2;
            s.push('(');
        }
        else if(str[i] == '['){
            temp *= 3;
            s.push('[');
        }
        else if(str[i] == ')' && (s.empty() || s.top() != '(')){
            flag = false;
            break;
        }
        else if(str[i] == ']' && (s.empty() || s.top() != '[')){
            flag = false;
            break;
        }
        else if(str[i] == ')'){
            if(str[i - 1] == '('){
                res += temp;
            }
            s.pop();
            temp /= 2;
        }
        else if(str[i] == ']'){
            if(str[i - 1] == '['){
                res += temp;
            }
            s.pop();
            temp /= 3;
        }
    }
    if(flag && s.empty()){
        cout << res;
    }
    else{
        cout << 0;
    }
    return 0;
}
