#include <iostream>
#include <vector>

using namespace std;

int cnt1, cnt2;
vector<int> v(8);
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 8; i++) {
        cin >> v[i];
        if(i > 0) {
            if(v[i] > v[i - 1]) cnt1++;
            else cnt2++;
        }
    }
    if(cnt1 == 7) cout << "ascending\n";
    else if(cnt2 == 7) cout << "descending\n";
    else cout << "mixed\n";
    return 0;
}
