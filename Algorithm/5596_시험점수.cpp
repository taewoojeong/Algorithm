#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int total1, total2;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    total1 = a + b + c + d;
    cin >> a >> b >> c >> d;
    total2 = a + b + c + d;
    total1 >= total2 ? cout << total1 : cout << total2;
}
