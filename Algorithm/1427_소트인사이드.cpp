#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool compare(int a, int b){
    return a > b;
}
int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    string a;
    cin >> a;
    sort(a.begin(), a.end(), compare);
    cout << a;
    return 0;
}
