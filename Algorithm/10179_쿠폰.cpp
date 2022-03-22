#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cout << fixed;
    cout.precision(2);
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        double coupon;
        cin >> coupon;
        cout << "$" << coupon * 0.8 << "\n";
    }
    return 0;
}
