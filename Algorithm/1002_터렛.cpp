#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T, x1, x2, y1, y2, r1, r2, dist, n1, n2;
    cin >> T;
    while(T--){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        dist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
        n1 = (r2 - r1) * (r2 - r1);
        n2 = (r2 + r1) * (r2 + r1);
        if(dist == 0)
        {
            if(n1 == 0)
                cout << -1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (dist == n1 || dist == n2)
            cout << 1 << '\n';
        else if (n1 < dist && dist < n2)
            cout << 2 << '\n';
        else
            cout << 0 << '\n';
    }
    return 0;
}
