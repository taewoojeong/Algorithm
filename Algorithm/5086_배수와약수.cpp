#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v(3);

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    while(true){
        vector <int> v(2);
        cin >> v[0] >> v[1];
        if(v[0] == 0) break;
        if (v[0] > v[1]) {
            if (v[0] % v[1] == 0) {
                cout << "multiple\n";
            }
            else {
                cout << "neither\n";
            }
        }
        else {
            if (v[1] % v[0] == 0) {
                cout << "factor\n";
            }
            else {
                cout << "neither\n";
            }
        }
    }
}
