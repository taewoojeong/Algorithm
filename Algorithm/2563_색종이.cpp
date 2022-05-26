#include <iostream>
using namespace std;

int N, x, y, res = 0;
int paper[101][101];
int main(int argc, char *argv[]) {
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        for(int i = x; i < x + 10; i++){
            for(int j = y; j < y + 10; j++){
                paper[i][j] = 1;
            }
        }
    }
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++){
            if(paper[i][j]) res++;
        }
    }
    cout << res << "\n";
    return 0;
}
