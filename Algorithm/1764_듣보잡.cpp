#include <iostream>
#include <algorithm>
using namespace std;

int N, M, cnt;
string list[500000], noHearSee[500000];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;
    
    for (int i = 0; i < N+M; i++)
        cin >> list[i];

    sort(list, list + N+M);

    for (int i = 0; i < N + M-1; i++)
        if (list[i] == list[i + 1])
            noHearSee[cnt++] = list[i];

    cout << cnt << '\n';

    for (int i = 0; i < cnt; i++)
        cout << noHearSee[i] << '\n';
}
