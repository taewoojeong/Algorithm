#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int A, B;
    cin >> A >> B;
    if(A > B)
        cout << ">";
    else if(A == B)
        cout << "==";
    else
        cout << "<";
}
