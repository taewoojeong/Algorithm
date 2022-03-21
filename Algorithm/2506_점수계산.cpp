#include <iostream>
using namespace std;

int N, num, score = 0, res = 0;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(num == 1){
            res += ++score;
        }
        else{
            score = 0;
        }
    }
    cout << res << "\n";
}
