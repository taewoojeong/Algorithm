#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int N, M;
int time_num[100005];

int binary_search(int left, int right){
    while(left <= right){
        int blulay = 1, sum = 0;
        int mid = (left + right) / 2;
        for(int i = 0; i < N; i++){
            if(time_num[i] + sum > mid){
                blulay++;
                sum = 0;
            }
            sum += time_num[i];
        }
        
        if(blulay <= M)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left;
}

int main(int argc, const char * argv[]){
    cin >> N >> M;
    int total = 0, max = 0;
    for(int i = 0; i < N; i++){
        cin >> time_num[i];
        total += time_num[i];
        if(time_num[i] > max){
            max = time_num[i];
        }
    }
    cout << binary_search(max, total);
    return 0;
}
