#include <iostream>
using namespace std;

int N, num, Ysum, Msum;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        Ysum += (num / 30 + 1) * 10;
        Msum += (num / 60 + 1) * 15;
    }
    if(Ysum < Msum){
        cout << "Y " << Ysum;
    }
    else if(Ysum > Msum){
        cout << "M " << Msum;
    }
    else{
        cout << "Y M " << Ysum;
    }
}
