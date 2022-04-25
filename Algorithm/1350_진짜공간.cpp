#include <iostream>

using namespace std;

int N, cluster;
long long res;
int file[50];

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> file[i];
    }
    cin >> cluster;
    for(int i = 0; i < N; i++){
        if(file[i] % cluster == 0) res += file[i] / cluster;
        else res += file[i] / cluster + 1;
    }
    cout << res * cluster << "\n";
    return 0;
}
