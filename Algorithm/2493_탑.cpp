#include <iostream>
#include <stack>

using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    stack <pair<int, int>> s;
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        while(!s.empty()){
            if(num < s.top().second){
                cout << s.top().first << " ";
                break;
            }
            s.pop();
        }
        if(s.empty()){
            cout << "0 ";
        }
        s.push(make_pair(i + 1, num));
    }
    return 0;
}
