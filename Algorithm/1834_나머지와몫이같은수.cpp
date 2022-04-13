#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    long long sum = 0;
    for(long long i = 1; i < N; i++){
        sum += N * i + i;
    }
    cout << sum << "\n";
    return 0;
}
