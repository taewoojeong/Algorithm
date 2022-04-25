#include <iostream>
#include <algorithm>

using namespace std;

int S1, S2, S3, res;
int num[81];

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> S1 >> S2 >> S3;
    for(int i = 1; i <= S1; i++){
        for(int j = 1; j <= S2; j++){
            for(int k = 1; k <= S3; k++){
                num[i + j + k]++;
            }
        }
    }
    for(int i = 3; i <= S1 + S2 + S3; i++){
        res = max(res, num[i]);
    }
    for(int i = 3; i <= S1 + S2 + S3; i++){
        if(res == num[i]){
            cout << i << "\n";
            break;
        }
    }
    return 0;
}
