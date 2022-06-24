#include <iostream>
#include <cmath>
using namespace std;

int A, B, C;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B >> C;
    if(A + B == C) cout << A << "+" << B  << "=" << C << "\n";
    else if(A - B == C) cout << A << "-" << B  << "=" << C << "\n";
    else if(A * B == C) cout << A << "*" << B  << "=" << C << "\n";
    else if(A == B + C) cout << A << "=" << B  << "+" << C << "\n";
    else if(A == B - C) cout << A << "=" << B  << "-" << C << "\n";
    else if(A == B * C) cout << A << "=" << B  << "*" << C << "\n";
    else if(A == B / C) cout << A << "=" << B  << "/" << C << "\n";
    else if(A / B == C) cout << A << "/" << B  << "=" << C << "\n";
    return 0;
}
