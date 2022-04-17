#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
    int N, M, n, m, sum = 0;
    cin >> N >> M;
    if(sqrt(N) - (int)sqrt(N) > 0){
        n = sqrt(N) + 1;
        m = (int)sqrt(M);
    }
    else{
        n = sqrt(N);
        m = (int)sqrt(M);
    }
    for(int i = n; i <= m; i++){
        sum += i * i;
    }
    if(sum > 0){
        cout << sum << "\n" << n * n;
    }
    else{
        cout << -1;
    }
    return 0;
}
