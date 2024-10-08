// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int N, mx = -1;
    cin >> N;
    int A[N];
    for (int i = 1; i < N; i++)
    {
        cin >> A[i];
        if (A[i] > mx)
            mx = A[i]+1;
    }
    A[0] = 0;
    for (int i = 0; i < N; i++)
    {
        cout << mx + A[i] << " ";
        mx = mx + A[i];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}