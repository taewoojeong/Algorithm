#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int year, month, day;
    int syear, smonth, sday;
    cin >> year >> month >> day >> syear >> smonth >> sday;
    if(smonth > month){
        cout << syear - year << "\n";
    }
    else if(smonth == month && sday >= day){
        cout << syear - year << "\n";
    }
    else{
        cout << syear - year - 1 << "\n";
    }
    
    cout << syear - year + 1 << "\n";
    cout << syear - year << "\n";
    return 0;
}
