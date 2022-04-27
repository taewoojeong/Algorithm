#include <iostream>

using namespace std;

int N, num[101], seat, res;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> seat;
        if(num[seat] == 0) num[seat]++;
        else res++;
    }
    cout << res << "\n";
    return 0;
}
