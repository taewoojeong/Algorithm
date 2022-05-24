#include <iostream>

using namespace std;
int N, M;
int stone_max = 0;
int color[300005];

int binary_search(int left, int right){
    while(left <= right){
        int sto_if = 0;
        int mid = (left + right) / 2;
        for(int i = 0; i < M; i++){
            sto_if += color[i] / mid;
            if(color[i] % mid != 0){
                sto_if++;
            }
        }
        if(sto_if > N)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return left;
}

int main(){
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> color[i];
        if(color[i] > stone_max){
            stone_max = color[i];
        }
    }
    cout << binary_search(1, stone_max);
}
