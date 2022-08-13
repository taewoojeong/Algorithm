#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, num;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    while(true) {
        string s = " NOT";
        cin >> num;
        if(num == 0) break;
        if(num % N == 0) s = "";
        cout << num << " is" << s << " a multiple of " << N << ".\n";
    }
    return 0;
}
