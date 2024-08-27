// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        int A[n * m];
        FOR(i, 0, n * m - 1)
        cin >> A[i];
        sort(A, A + n * m);
        int minVal = A[0];
        int secondMinVal = A[1];
        int maxVal = A[n * m - 1];
        int ans = 0;
        ans = (maxVal - minVal) * max(n - 1, m - 1) + (maxVal - secondMinVal) * min(n - 1, m - 1);
        ans += (n - 1) * (m - 1) * (maxVal - minVal);
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}