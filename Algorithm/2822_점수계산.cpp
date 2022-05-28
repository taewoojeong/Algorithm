#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    vector <pair<int, int>> v(8);
    vector <int> v1;
    int sum = 0;
    for(int i = 0; i < 8; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(v.begin(), v.end());
    for(int i = 3; i < 8; i++){
        sum += v[i].first;
        v1.push_back(v[i].second);
    }
    sort(v1.begin(), v1.end());
    cout << sum << "\n";
    for(int i = 0; i < 5; i++){
        cout << v1[i] << " ";
    }
}
