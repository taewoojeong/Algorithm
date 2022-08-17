#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int N, num;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 1; i <= 100; i++) {
        for(int j = 2; j < i; j++) {
            for(int k = j + 1; k < i; k++) {
                for(int l = k + 1; l < i; l++) {
                    if(j * j * j + k * k * k + l * l * l == i * i * i) {
                        cout << "Cube = " << i <<", Triple = (" << j << "," << k << "," << l << ")\n";
                    }
                }
            }
        }
    }
    return 0;
}
