#include <iostream>
#include <string>

using namespace std;

int cnt = 0;
string a;

void three(string a){
    int sum = 0;
    if(a.size() > 1){
        cnt++;
        for(int i = 0; i < a.size(); i++){
            sum += a[i] - '0';
        }
        three(to_string(sum));
    }
    else{
        if(stoi(a) % 3 == 0){
            printf("%d\nYES", cnt);
        }
        else{
            printf("%d\nNO", cnt);
        }
    }
}

int main(){
    cin >> a;
    three(a);
}
