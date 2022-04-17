#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        deque <pair<int,int>> dq;
        int M, index, cnt = 0, res = 0;
        cin >> M >> index;
        for(int j = 0; j < M; j++){
            int num;
            cin >> num;
            dq.push_back({num,j});
        }
        while(!dq.empty()){
            if(dq.size() == 1){
                cnt++;
                res = cnt;
                break;
            }
            else{
                for(int k = 1; k < dq.size(); k++){
                    if(dq[0].first < dq[k].first){
                        dq.push_back(dq.front());
                        dq.pop_front();
                        break;
                    }
                    if(k == dq.size() - 1){
                        if(dq.front().second != index){
                            dq.pop_front();
                            cnt++;
                        }
                        else{
                            res = cnt + 1;
                            break;
                        }
                    }
                }
            }
            if(res > 0){
                break;
            }
        }
        cout << res << "\n";
    }
    return 0;
}
