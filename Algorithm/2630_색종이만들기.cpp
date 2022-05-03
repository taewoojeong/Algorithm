#include <iostream>

using namespace std;
int cp[130][130];
int white, blue;
void paper(int r, int c, int size){
    int color = cp[r][c];
    for(int i = r; i < r + size; i++){
        for(int j = c; j < c + size; j++){
            if(cp[i][j] != color){
                paper(r, c, size / 2);
                paper(r, c + (size / 2), size / 2);
                paper(r + (size / 2), c, size / 2);
                paper(r + (size / 2), c + (size / 2), size / 2);
                return;
            }
        }
    }
    if(color == 1)blue++;
    else white++;
}

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> cp[i][j];
        }
    }
    paper(0, 0, N);
    cout << white << "\n" << blue << "\n";
}
