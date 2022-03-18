#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int N, A, B;
    cin >> N >> A >> B;
    vector <int> v(N);
    for(int i = 0; i < N; i++){
        cin >> v[i];
        if((int)pow(v[i],2) <= (int)pow(A,2) + (int)pow(B,2)){
                cout << "DA\n";
            }
            else{
                cout << "NE\n";
            }
    }
}
