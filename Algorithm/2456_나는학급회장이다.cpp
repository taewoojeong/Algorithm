#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, num;
int score[3][3];
int total[3];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    while(N--) {
        for(int i = 0; i < 3; i++) {
            cin >> num;
            score[i][num - 1]++;
            total[i] += num;
        }
    }
    if(total[0] > total[1] && total[0] > total[2]) cout << 1 << " " << total[0] << "\n";
    else if(total[1] > total[0] && total[1] > total[2]) cout << 2 << " " << total[1] << "\n";
    else if(total[2] > total[0] && total[2] > total[1]) cout << 3 << " " << total[2] << "\n";
    else if(total[0] == total[1] && total[0] > total[2]) {
        for(int i = 2; i >= 0; i--) {
            if(score[0][i] > score[1][i]) {
                cout << 1 << " " << total[0] << "\n";
                return 0;
            }
            else if(score[0][i] < score[1][i]) {
                cout << 2 << " " << total[1] << "\n";
                return 0;
            }
        }
        cout << 0 << " " << total[0] << "\n";
    }
    else if(total[0] == total[2] && total[0] > total[1]) {
        for(int i = 2; i >= 0; i--) {
            if(score[0][i] > score[2][i]) {
                cout << 1 << " " << total[0] << "\n";
                return 0;
            }
            else if(score[0][i] < score[2][i]) {
                cout << 3 << " " << total[2] << "\n";
                return 0;
            }
        }
        cout << 0 << " " << total[0] << "\n";
    }
    else if(total[1] == total[2] && total[1] > total[0]) {
        for(int i = 2; i >= 0; i--) {
            if(score[1][i] > score[2][i]) {
                cout << 2 << " " << total[1] << "\n";
                return 0;
            }
            else if(score[1][i] < score[2][i]) {
                cout << 3 << " " << total[2] << "\n";
                return 0;
            }
        }
        cout << 0 << " " << total[1] << "\n";
    }
    else if(total[0] == total[1] &&total[1] == total[2]) {
        for(int i = 2; i >= 0; i--) {
            if(score[0][i] > score[1][i] && score[0][i] > score[2][i]) {
                cout << 1 << " " << total[0] << "\n";
                return 0;
            }
            else if(score[1][i] > score[0][i] && score[1][i] > score[2][i]) {
                cout << 2 << " " << total[1] << "\n";
                return 0;
            }
            else if(score[2][i] > score[0][i] && score[2][i] > score[1][i]) {
                cout << 3 << " " << total[2] << "\n";
                return 0;
            }
        }
        cout << 0 << " " << total[0] << "\n";
    }
    return 0;
}
