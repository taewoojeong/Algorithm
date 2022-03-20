#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int A, B;
vector <int> v(11);
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 1; i < 11; i++){
        cin >> A >> B;
        v[i] = B - A + v[i - 1];
    }
    sort(v.begin(), v.end());
    cout << v[10] << "\n"; 
}
