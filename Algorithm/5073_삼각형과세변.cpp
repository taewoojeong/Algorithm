#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v(3);

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    bool flag = true;
    while(flag){
        vector <int> v(3);
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());
        if(v[0] == 0){
            flag = false;
        }
        else if(v[0] + v[1] <= v[2]){
            cout << "Invalid\n";
        }
        else if(v[0] == v[1] && v[1] == v[2]){
            cout << "Equilateral\n";
        }
        else if(v[0] == v[1] || v[0] == v[2] || v[1] == v[2]){
            cout << "Isosceles\n";
        }
        else{
            cout << "Scalene\n";
        }
    }
}
