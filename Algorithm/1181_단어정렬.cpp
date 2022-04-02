#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    vector <string> v(n);
    vector <pair <int, string>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        a[i].first = v[i].size();
        a[i].second = v[i];
    }
    sort(a.begin(), a.end());
    cout << a[0].second << endl;
    for (int i = 1; i < n; i++) {
        if (a[i].second != a[i - 1].second) {
            cout << a[i].second << endl;
        }
    }
}
