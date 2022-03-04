#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vector <int> a(3);
    vector <int> b(2);
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << b[0] + a[0] - 50;
}
