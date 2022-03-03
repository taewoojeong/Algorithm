#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int hour, minute, time;
    cin >> hour >> minute >> time;
    hour += time / 60;
    minute += time % 60;
    if(minute > 59){
        minute -= 60;
        hour += 1;
    }
    if(hour > 23){
        hour -= 24;
    }
    cout << hour << " " << minute;
    return 0;
}
