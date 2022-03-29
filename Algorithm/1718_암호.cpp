#include <iostream>
#include <string>
using namespace std;


int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string A, B, result;
    getline(cin, A);
    getline(cin, B);
    int idx = 0;
    for(int i = 0; i < A.size(); i++){
        if(A[i] == ' ')
            result += ' ';
        else if(A[i] - B[idx] <= 0)
            result += A[i] - B[idx] + 'a' + 25;
        else
            result += A[i] - B[idx] + 'a' - 1;
        idx = (idx + 1) % B.length();
    }
    cout << result << "\n";
}
