#include <iostream>
#include <cmath>
using namespace std;

int visited[123456 * 2 + 1] = {1, 1, };

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 2; i < sqrt(123456 * 2); i++){
        if(visited[i]) continue;
        for(int j = i * i; j <= 123456 * 2; j += i){
            if(visited[j]) continue;
            visited[j] = 1;
        }
    }
    while(n){
        int sum = 0;
        for(int i = n + 1; i <= 2 * n; i++){
            if(!visited[i]) sum++;
        }
        cout << sum << "\n";
        cin >> n;
    }
}
