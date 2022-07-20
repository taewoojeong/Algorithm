#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, standard, res;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> standard;
    sort(v.begin(), v.end());
    int start = 0, end = n - 1;
    while(start < end) {
        if(v[start] + v[end] > standard) {
            end--;
        } else if(v[start] + v[end] < standard) {
            start++;
        } else {
            res++;
            end--;
            start++;
        }
    }
    cout << res << "\n";
    return 0;
}
