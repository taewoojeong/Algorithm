#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int sum = 0, N;
    cin >> N;
    for(int i = 0; i < 5; i++){
        int num;
        cin >> num;
        if(N == num){
            sum++;
        }
    }
    cout << sum;
}
