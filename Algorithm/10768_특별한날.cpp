#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int month, day;
    cin >> month >> day;
    if(month < 2){
        cout << "Before";
    }
    else if(month == 2){
        if(day < 18){
            cout << "Before";
        }
        else if(day == 18){
            cout << "Special";
        }
        else{
            cout << "After";
        }
    }
    else{
        cout << "After";
    }
}
