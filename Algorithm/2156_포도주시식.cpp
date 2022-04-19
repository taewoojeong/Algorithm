#include <iostream>

using namespace std;

int N;
int a[10001];
int DP[100001];

void wine(){
    DP[0] = 0;
    DP[1] = a[0];
    DP[2] = a[0] + a[1];
    for(int i = 3; i <= N; i++){
        DP[i] = max(DP[i - 3] + a[i - 2] + a[i - 1], max(DP[i - 2] + a[i - 1], DP[i - 1]));
    }
    cout << DP[N] << "\n";
}
int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    wine();
    return 0;
}
