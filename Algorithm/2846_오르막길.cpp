#include <iostream>
#include <algorithm>

using namespace std;

int N, h, bottom, top, res;
int height[1000];
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    
    for(int i = 0; i < N; i++){
        cin >> height[i];
        if(i == 0) bottom = height[i];
        else if(height[i] > height[i - 1]) {
            top = height[i];
            res = max(res, top - bottom);
        } else bottom = height[i];
    }
    cout << res << "\n";
    return 0;
}
