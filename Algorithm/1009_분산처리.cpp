#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n, a, b, c;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        c = a % 10;
        for(int j = 1; j < b; j++){
            c *= a;
            c %= 10;
        }
        if(c == 0) c = 10;
        cout << c << "\n";
    }
}
