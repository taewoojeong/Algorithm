#include <iostream>
#include <cmath>
using namespace std;


int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T;
    cin >> T;
    if(T % 10 == 0){
        cout << T / 300 << " " << T % 300 / 60 << " " << T % 60 / 10;
    }
    else{
        cout << -1;
    }
}
