#include <iostream>
#include <vector>

using namespace std;

int num, minimum = 100, res;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vector<int> v(11);
    for(int i = 1; i < 11; i++) {
        cin >> num;
        v[i] = v[i - 1] + num;
        if(abs(100 - v[i]) <= minimum) {
            minimum = abs(100 - v[i]);
            res = v[i];
        }
    }
    cout << res << "\n";
    return 0;
}
