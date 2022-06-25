#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int A, B, C, D, P, M, N, a[1003];
vector<int> v(3);
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B >> C >> D;
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < 3; i++) {
        int cnt = 0;
        if(0 < v[i] % (A + B) && v[i] % (A + B) <= A) cnt++;
        if(0 < v[i] % (C + D) && v[i] % (C + D) <= C) cnt++;
        cout << cnt << "\n";
    }
    return 0;
}
