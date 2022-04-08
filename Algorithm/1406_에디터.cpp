#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string str;
    int M;
    cin >> str >> M;
    stack <char> l;
    stack <char> r;
    for(int i = 0; i < str.size(); i++){
        l.push(str[i]);
    }
    for(int i = 0; i < M; i++){
        char comm;
        cin >> comm;
        if(comm == 'P'){
            char c;
            cin >> c;
            l.push(c);
        }
        else if(comm == 'L' && !l.empty()){
            r.push(l.top());
            l.pop();
        }
        else if(comm == 'D' && !r.empty()){
            l.push(r.top());
            r.pop();
        }
        else if(comm == 'B' && !l.empty()){
            l.pop();
        }
    }
    while(!l.empty()){
        r.push(l.top());
        l.pop();
    }
    while(!r.empty()){
        cout << r.top();
        r.pop();
    }
    return 0;
}
