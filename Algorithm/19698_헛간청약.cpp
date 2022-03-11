#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    int N, W, H, L;
    cin >> N >> W >> H >> L;
    N > (W / L) * (H / L) ? cout << (W / L) * (H / L) << "\n": cout << N << "\n";
    return 0;
}
