#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, prize = 0, x, y, z;

vector <int> v(5);
int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> x >> y >> z;
        if(x == y && y == z){
            prize = max(prize, 10000 + x * 1000);
        }
        else if(x == y){
            prize = max(prize, 1000 + x * 100);
        }
        else if(y == z){
            prize = max(prize, 1000 + y * 100);
        }
        else if(z == x){
            prize = max(prize, 1000 + z * 100);
        }
        else{
            prize = max(prize, max(x, max(y, z)) * 100);
        }
    }
    cout << prize << "\n";
}
