#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string N;
    cin >> N;
    
    int result = 0;
    
    for(int i = 0; i < N.length(); i++){
        int digit = N[i] -'0';
        result = ((result * 10) % 20000303 + digit) % 20000303;
    }
    cout << result << "\n";
}
