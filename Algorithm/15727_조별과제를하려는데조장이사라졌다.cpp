#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    if(N % 5 == 0){
        cout << N / 5;
    }
    else{
        cout << N / 5 + 1;
    }
}

