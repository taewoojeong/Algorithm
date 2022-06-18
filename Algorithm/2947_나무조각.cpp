#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int a[5];
    bool flag = true;
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    while(flag){
        for(int i = 0; i < 4; i++){
            if(a[i] > a[i + 1]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;
                int cnt = 0;
                for(int j = 0; j < 5; j++){
                    cout << a[j] << " ";
                    if(a[j] == j + 1){
                        cnt++;
                    }
                }
                if(cnt == 5){
                    flag = false;
                }
                cout << "\n";
            }
        }
    }
}
