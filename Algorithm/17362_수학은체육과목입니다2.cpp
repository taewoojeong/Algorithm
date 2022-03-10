#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    switch(n % 8) {
        case 1:
            cout << 1 << "\n";
            break;
        case 0: case 2:
            cout << 2 << "\n";
            break;
        case 3: case 7:
            cout << 3 << "\n";
            break;
        case 4: case 6:
            cout << 4 << "\n";
            break;
        default:
            cout << 5 << "\n";
            
    }
    return 0;
}
