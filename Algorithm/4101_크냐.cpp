#include <iostream>
#include <algorithm>

using namespace std;

int a, b;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> a >> b;
    while(a) {
        if(a > b) cout << "Yes\n";
        else cout << "No\n";
        cin >> a >> b;
    }
    return 0;
}
