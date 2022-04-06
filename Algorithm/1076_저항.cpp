#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string s[3];
string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
int ohm[3];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i = 0; i < 3; i++){
        cin >> s[i];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 10; j++){
            if(s[i] == color[j]){
                ohm[i] = j;
                break;
            }
        }
    }
    
    long long num = (ohm[0] * 10 + ohm[1]) * pow(10, ohm[2]);
    cout << num << "\n";
    return 0;
}
