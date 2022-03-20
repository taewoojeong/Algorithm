#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    vector <int> v(4);
    for(int i = 0; i < 4; i++){ 
        cin >> v[i];
    }
    v[2] -= v[0];
    v[3] -= v[1];
    sort(v.begin(), v.end());
    cout << v[0];
}
