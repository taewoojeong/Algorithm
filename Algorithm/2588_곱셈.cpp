#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int A, B;
    cin >> A >> B;
    cout << A * (B % 10) << "\n" << A * ((B % 100) / 10) << "\n" << A * (B / 100) << "\n" << A * B;
}
