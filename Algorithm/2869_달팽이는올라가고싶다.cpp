#include <iostream>

using namespace std;

int A, B, V;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> A >> B >> V;
    V -= B;
    if(V % (A - B) == 0) V /= (A - B);
    else {
        V /= (A - B);
        V++;
    }
    cout << V << "\n";
    return 0;
}
