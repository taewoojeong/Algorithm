#include <iostream>
#include <algorithm>
using namespace std;

int T, x, y, res = 0;


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> T;
    while(T--){
        cin >> x >> y;
        y -= x;
        for(double i = 1; ; i++){
            if(y < i * i){
                if(y == (i - 1) *(i - 1)) res = 2 * (i - 1) - 1;
                else if( y < ((i - 1)*(i - 1) + i * i) / 2) res = 2 * (i - 1);
                else res = 2 * i - 1;
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
