#include <iostream>
#include <cmath>

using namespace std;

long long res;
long long binary_search(long long left, long long right, long long find){
    while (left <= right){
        long long mid = (left + right) / 2;
        if(pow(mid, 2) >= find){
            res = mid;
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return res;
}

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n;
    cin >> n;
    cout << binary_search(0, 3037000500, n);
    return 0;
}
