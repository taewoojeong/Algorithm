#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int H, W, N;
        cin >> H >> W >> N;
        if(N % H > 0){
            cout << N % H * 100 + N / H + 1 << "\n";
        }
        else{
            cout << H * 100 + N / H << "\n";
        }
    }
}
