#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[]){
    ios::sync_with_stdio(false);cin.tie(NULL);
    int N;
    cin >> N;
    queue <int> q;
    for(int i = 1; i < N + 1; i++){
        q.push(i);
    }
    while(q.size() > 1){
        q.pop(); 
        q.push(q.front());
        q.pop();
    }
    cout << q.front();
    return 0;
}
