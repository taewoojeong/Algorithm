#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    cout << (n / 2 + 1) * (n - n / 2 + 1);
}
