#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector <vector<int>> video;

void get_cnt(int r, int c, int size){
    int color = video[r][c];
    for(int i = r; i < r + size; i++){
        for(int j = c; j < c + size; j++){
            if(video[i][j] != color){
                cout << "(";
                get_cnt(r, c, size / 2);
                get_cnt(r, c + (size / 2), size / 2);
                get_cnt(r + (size / 2), c, size / 2);
                get_cnt(r + (size / 2), c + (size / 2), size / 2);
                cout << ")";
                return;
            }
        }
    }
    if(color ==  1){
        cout << 1;
    }
    else{
        cout << 0;
    }
}

int main(int argc, char *argv[]) {
    int n;
    string str;
    vector <int> v;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> str;
        for(int j = 0; j < n; j++){
            v.push_back(str[j] - '0');
        }
        video.push_back(v);
        v.clear();
    }
    get_cnt(0, 0, n);
    return 0;
}
