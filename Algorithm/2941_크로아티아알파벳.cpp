#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    string str;
    int cnt = 0;
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        if((str[i] == 'c' || str[i] == 's' || str[i] == 'z') && str[i + 1] == '='){
            i++;
        }
        if((str[i] == 'c' || str[i] == 'd') && str[i + 1] == '-'){
            i++;
        }
        if(str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '='){
            i += 2;
        }
        if((str[i] == 'l' || str[i] == 'n') && str[i + 1] == 'j'){
            i++;
        }
        cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
