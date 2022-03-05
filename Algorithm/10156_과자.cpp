#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int K, N, M;
    cin >> K >> N >> M;
    if(K * N >= M){
        cout << K * N - M;
    }
    else{
        cout << 0;
    }
}
