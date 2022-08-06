#include <iostream>
#include <string>

using namespace std;

int N;
char s[12][12], c, my[12][12];
int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
bool flag;
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++) {
            cin >> s[i][j];
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++) {
            cin >> c;
            if(c == 'x') {
                int num = 0;
                for(int k = 0; k < 8; k++) {
                    if(s[i + dx[k]][j + dy[k]] == '*') num++;
                }
                my[i][j] = num + '0';
                if(s[i][j] == '*') flag = true;
            } else {
                my[i][j] = '.';
            }
        }
    }
    if(flag) {
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= N; j++) {
                if(s[i][j] == '*') {
                    my[i][j] = '*';
                }
            }
        }
    }
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= N; j++) {
            cout << my[i][j];
        }
        cout << "\n";
    }
    return 0;
}
