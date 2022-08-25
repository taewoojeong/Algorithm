#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int e, f, c, bottle, res;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> e >> f >> c;
    bottle = e + f;
    while(bottle >= c) {
        res += bottle / c;
        bottle = bottle / c + bottle % c;
    }
    cout << res << "\n";
    return 0;
}
