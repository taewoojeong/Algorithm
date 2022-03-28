#include <iostream>
#include <queue>

using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;
    queue <int> q;
    for(int i = 1; i <= N; i++){
        q.push(i);
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    return 0;
}
