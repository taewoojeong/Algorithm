#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int T;
vector <int> v(10);

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> T;
    while(T--){
        for(int i = 0; i < 10; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << v[7] << "\n";
    }
}
