#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int N, M, result;


int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int L, N, P, K, res1 = 0, res2 = 0, resres = 0, resres2 = 0;
    cin >> L >> N;
    vector <int> v(L + 1, 0);
    vector <int> v1(N);
    vector <int> v2(N, 0);
    for(int i = 0; i < N; i++){
        cin >> P >> K;
        v1[i] = K - P;
        for(int j = P; j <= K; j++){
            if(v[j] == 0){
                v[j] = 1;
                v2[i]++;
            }
        }
    }
    for(int i = 0; i < N; i++){
        if(res1 < v1[i]){
            res1 = v1[i];
            resres = i + 1;
        }
        if(res2 < v2[i]){
            res2 = v2[i];
            resres2 = i + 1;
        }
    }
    cout << resres << "\n" << resres2 << "\n";
}
