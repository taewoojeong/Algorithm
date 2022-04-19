#include <iostream>
#include <vector>
using namespace std;

int N;
double res = 0, x, y;


int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    vector <pair<double, double>> v(N + 1);
    for(int i = 0; i < N; i++){
        cin >> x >> y;
        v[i].first = x;
        v[i].second = y;
    }
    v.push_back({v[0].first, v[0].second});
    for(int i = 1; i < N - 1; i++){
        res += ((v[i].second - v[0].second) * (v[i + 1].first - v[0].first) - (v[i].first - v[0].first) * (v[i + 1].second - v[0].second)) / 2;
    }
    cout.precision(1);
    cout << fixed;
    cout << abs(res) << "\n";
    return 0;
}
