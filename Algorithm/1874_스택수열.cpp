#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;
stack <int> s;
vector <char> v;
int main(int argc, char *argv[]){
    int n;
    cin >> n;
    int j = 1;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        for(; j <= x; j++){
            s.push(j);
            v.push_back('+');
        }
        if(s.top() == x){
            s.pop();
            v.push_back('-');
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
}
