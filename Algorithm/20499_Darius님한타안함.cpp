#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int K, D, A;
    scanf("%d/%d/%d", &K, &D, &A);
    if(K + A < D || D == 0){
        cout << "hasu\n";
    }
    else{
        cout << "gosu\n";
    }
    return 0;
}
