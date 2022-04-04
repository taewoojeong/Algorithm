#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long arr[50] = {0, 1, };
long long fibo(int n){
    if(n == 0 || n == 1){
        arr[n] = n;
        return n;
    }
    else if(arr[n] == 0){
        arr[n] = fibo(n - 1) + fibo(n - 2);
    }
    return arr[n];
}

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        int num;
        cin >> num;
        if(num == 0){
            cout << "1 0" << "\n";
        }
        else{
            cout << fibo(num - 1) << " " << fibo(num) << "\n";
        }
    }
}
