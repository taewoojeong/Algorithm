#include <iostream>
using namespace std;

int day[11] = {31 ,28, 31, 30, 31, 30, 31, 31, 30, 31, 30};

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int x, y;
    cin >> x >> y;
    int sum = y;
    for(int i = 0; i < x - 1; i++){
        sum += day[i];
    }
    if(sum % 7 == 0) cout << "SUN";
    else if(sum % 7 == 1) cout << "MON";
    else if(sum % 7 == 2) cout << "TUE";
    else if(sum % 7 == 3) cout << "WED";
    else if(sum % 7 == 4) cout << "THU";
    else if(sum % 7 == 5) cout << "FRI";
    else if(sum % 7 == 6) cout << "SAT";
}
