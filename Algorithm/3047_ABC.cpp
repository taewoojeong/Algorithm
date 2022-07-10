#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v(3);
char c;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> v[0] >> v[1] >> v[2];
    sort(v.begin(), v.end());
    for(int i = 0; i < 3; i++) {
        cin >> c;
        cout << v[c - 65] << " ";
    }
    return 0 ;
}
