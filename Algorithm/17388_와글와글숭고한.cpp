#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int S, K, H;
    cin >> S >> K >> H;
    if(S + K + H >= 100){
        cout << "OK" << "\n";
    }
    else{
        if(S < K && S < H){
            cout << "Soongsil" << "\n";
        }
        else if(S > K && K < H){
            cout << "Korea" << "\n";
        }
        else{
            cout << "Hanyang" << "\n";
        }
    }
    return 0;
}
