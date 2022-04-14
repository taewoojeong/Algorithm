#include <iostream>
using namespace std;

int N;
long long space[101][101];
long long a[101][101];

void jump(){
    a[0][0] = 1;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            long long num = space[i][j];
            if (i != N - 1 && i + num < N){
                a[i + num][j] += a[i][j];
            }
            if (j != N - 1 && j + num < N){
                a[i][j + num] += a[i][j];
            }
        }
    }
    cout << a[N - 1][N - 1] << "\n";
}

int main(int argc, char *argv[]) {
    cin >> N;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> space[i][j];
        }
    }
    jump();
    return 0;
}
