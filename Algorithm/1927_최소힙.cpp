#include <iostream>
#include <vector>
#include <queue>
using namespace std;


struct compare {
   bool operator()(int a, int b) {
       return a > b;
   }
};
priority_queue <int, vector <int>, compare> pq;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N, x;
    cin >> N;
    while (N--) {
       cin >> x;
       if (!x) {
          if (!pq.empty()) {
             cout << pq.top() << "\n";
             pq.pop();
          }
          else cout << "0\n";
       }
       else {
          pq.push(x);
       }
    }
    return 0;
}
