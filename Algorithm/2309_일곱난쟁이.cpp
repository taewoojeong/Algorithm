#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    vector <int> v(9);
    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < 9; i++){
        for(int j = i + 1; j < 9; j++){
            if(sum - v[i] - v[j] == 100){
                for(int k = 0; k < 9; k++){
                    if(k != i && k != j)
                        cout << v[k] << "\n";
                }
                return 0;
            }
        }
    }
}
