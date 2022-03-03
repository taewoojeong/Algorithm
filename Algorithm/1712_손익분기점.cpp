#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b, c, profit;
    cin >> a >> b >> c;
    profit = c - b;
    if(profit < 1) {
        cout << -1;
    }
    else {
        cout << a / profit + 1;
    }
}
