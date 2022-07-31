#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int V, E;
double A, B;
int parent[1001];

vector <pair <double, double>> star;
vector <pair <double, pair <int, int>>> graph;

int getParent(int x) {
   if (parent[x] == x) return x;
   return parent[x] = getParent(parent[x]);
}

int main(int argc, char *argv[]) {
    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

    cin >> V;
    for (int i = 0; i < V; i++) {
        parent[i] = i;
        cin >> A >> B;
        star.push_back({A, B});
    }
    for(int i = 0; i < star.size(); i++){
        for(int j = i + 1; j < star.size(); j++){
            graph.push_back({sqrt(pow(star[i].first - star[j].first,2) + pow(star[i].second - star[j].second,2)),{i, j}});
        }
    }
    sort(graph.begin(), graph.end());

    double sum = 0;
    int num = 0;
    for (int i = 0; i < graph.size(); i++) {
        double cost = graph[i].first;
        int start = graph[i].second.first;
        int end = graph[i].second.second;

        int a = getParent(start);
        int b = getParent(end);
        
        if (a == b) continue;
        if (a < b) parent[b] = a;
        else parent[a] = b;
        
        sum += cost;
        num++;

        if (num == V - 1) {
            cout.precision(3);
            cout << sum << "\n";
            return 0;
        }
    }
    return 0;
}
