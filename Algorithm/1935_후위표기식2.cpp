#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    string str;
    cin >> str;
    stack <double> s;
    vector <double> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
    }
    for(int i = 0; i < str.size(); i++){
        if(str[i] <= 'Z' && str[i] >= 'A'){
            s.push(v[str[i] - 'A']);
        }
        else{
            double a, b;
            a = s.top();
            s.pop();
            b = s.top();
            s.pop();
            switch(str[i]){
                case '+':
                    s.push(b + a);
                    break;
                case '-':
                    s.push(b - a);
                    break;
                case '*':
                    s.push(b * a);
                    break;
                case '/':
                    s.push(b / a);
                    break;
            }
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << s.top();
    return 0;
}
