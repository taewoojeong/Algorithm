#include <iostream>
#include <algorithm>

using namespace std;

int sum, diff;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> sum >> diff;
    if(sum < diff ||(sum + diff) % 2 || (sum - diff) % 2) cout << -1 << "\n";
    else cout << (sum + diff) / 2 << " " << (sum - diff) / 2 << "\n";
    return 0;
}
