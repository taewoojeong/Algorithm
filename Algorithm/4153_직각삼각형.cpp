#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v(3);

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    
    while(true){
        cin >> v[0] >> v[1] >> v[2];
        if(v[0] == 0) break;
        sort(v.begin(),v.end());
        if(v[0] * v[0] + v[1] * v[1] == v[2] * v[2]){
            cout << "right\n";
        }
        else{
            cout << "wrong\n";
        }
    }
}
