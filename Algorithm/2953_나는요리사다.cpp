#include <iostream>
#include <vector>

using namespace std;

int num, res, maximum = 0;
vector<int> v(5);

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            cin >> num;
            v[i] += num;
            if(v[i] > maximum) {
                res = i + 1;
                maximum = v[i];
            }
        }
    }
    cout << res << " " << maximum << "\n";
    return 0;
}
