#include <iostream>
#include <stack>
using namespace std;

int N, P, cnt = 0, A, B;
int main(int argc, char *argv[]){
    cin >> N >> P;
    stack <int> s[7];
    for(int i = 0; i < N; i++){
        cin >> A >> B;
        if(s[A].empty()){
            s[A].push(B);
            cnt++;
        }
        else{
            if(s[A].top() < B){
                s[A].push(B);
                cnt++;
            }
            else if(s[A].top() == B){
                continue;
            }
            else{
                while(!s[A].empty() && s[A].top() > B){
                    s[A].pop();
                    cnt++;
                }
                if(s[A].empty() || s[A].top() != B){
                    s[A].push(B);
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}
