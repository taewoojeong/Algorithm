#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
    int A, B, sum = 0;
    cin >> A >> B;
    vector <int> v;
    for(int i = 1; i < 46; i++){
        for(int j = 0; j < i; j++){
            v.push_back(i);
        }
    }
    for(int i = A - 1; i < B; i++){
        sum += v[i];
    }
    cout << sum << "\n";
}
