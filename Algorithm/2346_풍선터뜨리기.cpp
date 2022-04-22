#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    string temp = "1 ";
    deque <pair<int, int>> dq;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        dq.push_back(make_pair(num, i + 1));
    }
    while(!dq.empty()){
        if(dq.front().first > 0){
            cout << dq.front().second << " ";
            int a = dq.front().first;
            dq.pop_front();
            for(int j = 0; j < a - 1; j++){
                dq.push_back(dq.front());
                dq.pop_front();
            }
        }
        else{
            int a = dq.front().first;
            cout << dq.front().second << " ";
            dq.pop_front();
            for(int j = 0; j > a; j--){
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
    return 0;
}
