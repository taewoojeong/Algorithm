#include <iostream>
using namespace std;


int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int sum = 0;
    for(int i = 0; i < 4; i++){
        int num;
        cin >> num;
        sum += num;
    }
    cout << sum / 60 << "\n" << sum % 60;
}
