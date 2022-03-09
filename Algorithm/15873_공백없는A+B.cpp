#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long long n;
    cin >> n;
    if(n == 10){
        cout << 1;
    }
    else if(n % 10 == 0 && n % 100 / 10 == 1){
        cout << n / 100 + 10;
    }
    else{
        cout << n / 10 + n % 10;
    }
}
