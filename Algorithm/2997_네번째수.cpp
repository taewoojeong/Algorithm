#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v(3);
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int diff1 = v[1] - v[0];
    int diff2 = v[2] - v[1];
    if(diff1 == diff2) cout << v[2] + diff1 << "\n";
    else if(diff1 > diff2) cout << v[0] + diff2 << "\n";
    else cout << v[1] + diff1 << "\n";
    return 0;
}
