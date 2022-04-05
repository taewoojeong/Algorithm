#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, sum = 0;

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    vector <int> A(N);
    vector <int> B(N);
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0; i < N; i++){
        cin >> B[i];
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    reverse(B.begin(), B.end());
    for(int i = 0; i < N; i++){
        sum += A[i] * B[i];
    }
    cout << sum << "\n";
    return 0;
}
