#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int hours, minutes;
    cin >> hours >> minutes;
    if(minutes < 45) {
        if(hours > 0) {
            minutes += 15;
            hours -= 1;
        }
        else {
            hours = 23;
            minutes += 15;
        }
    }
    else {
        minutes -= 45;
    }
    cout << hours << " " << minutes << "\n";
    return 0;
}
