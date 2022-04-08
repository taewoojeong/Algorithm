#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N, cnt = 0;
    cin >> N;
    for(int i = 666; ;i++){
        int a = i;
        while(a >= 666){
            if(a % 1000 == 666){
                cnt++;
                break;
            }
            a /= 10;
        }
        if(N == cnt){
            cout << i;
            break;
        }
    }
    return 0;
}
