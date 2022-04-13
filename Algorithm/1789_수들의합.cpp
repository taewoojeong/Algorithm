#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long S;
    cin >> S;
    
    long long sum = 0;
    long long res;
    for(int i = 1;; i++){
        sum += i;
        if(sum >= S){
            res = i;
            break;
        }
    }
    if(sum == S){
        cout << res;
    }
    else{
        cout << res - 1;
    }
}
