#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int V, E;
        cin >> V >> E;
        cout << E - V + 2 << "\n";
    }
    return 0;
}



