#include <iostream>
#include <string>
#include <vector>

using namespace std;


int N, H, W;
string res;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> N >> H >> W;
    vector <string> v(H);
    for(int i = 0; i < H; i++){
        cin >> v[i];
    }
    for(int i = 1; i < H; i++){
        for(int j = 0; j < N * W; j++){
            if(v[i][j] != '?'){
                v[0][j] = v[i][j];
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < W; j++){
            if(v[0][i * W + j] != '?') {
                res += v[0][i * W + j];
                break;
            }
            if(j == W - 1) res += '?';
        }
    }
    cout << res << "\n";
    return 0;
}
