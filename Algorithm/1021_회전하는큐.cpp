#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <deque>
using namespace std;

long long dp[65][10] = {0};

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, M, close, cnt = 0;
    cin >> N >> M;
    deque <int> dq;
    for(int i = 1; i <= N; i++){
        dq.push_back(i);
    }
    for(int i = 0; i < M; i++){
        int num;
        cin >> num;
        if(num == dq.front()){
            dq.pop_front();
        }
        else{
            for(int i = 0; i < dq.size(); i++){
                if(dq[i] == num){
                    close = i;
                }
            }
            if(close <= dq.size() / 2){
                while(dq.front() != num){
                    dq.push_back(dq.front());
                    dq.pop_front();
                    cnt++;
                }
                dq.pop_front();
            }
            else{
                while(dq.front() != num){
                    dq.push_front(dq.back());
                    dq.pop_back();
                    cnt++;
                }
                dq.pop_front();
            }
        }
    }
    cout << cnt << "\n";
}
