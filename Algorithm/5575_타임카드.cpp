#include <iostream>
using namespace std;


int main(int argc, const char * argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i = 0; i < 3; i++){
        int h, m, s, h1, m1, s1;
        cin >> h >> m >> s >> h1 >> m1 >> s1;
        h1 -= h;
        m1 -= m;
        s1 -= s;
        if(s1 < 0){
            s1 += 60;
            m1 -= 1;
        }
        if(m1 < 0){
            m1 += 60;
            h1 -= 1;
        }
        cout << h1 << " " << m1 << " " << s1 << "\n";
    }
}
