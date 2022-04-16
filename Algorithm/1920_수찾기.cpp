#include <iostream>
#include <algorithm>

using namespace std;

int N, M, num;
int a[100005];
int binary_search(int first, int last, int find){
    int mid;
    mid = (first + last) / 2;
    
    if (a[mid] == find)
        return 1;
    if (first > last)
        return 0;
    
    if (find > a[mid])
        return binary_search(mid + 1, last, find);
    else
        return binary_search(first, mid - 1, find);
}

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);
    cin >> N;
    for(int i = 0; i < N; i++)
        cin >> a[i];
    sort(a, a + N);
    
    cin >> M;
    for(int i = 0; i < M; i++){
        cin >> num;
        cout << binary_search(0, N - 1, num) << "\n";
    }
}
