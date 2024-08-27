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
        int N, K, Q;
        cin >> N >> K >> Q;
        ll A[N], T[N];
        FOR(i, 0, N - 1)
        {
            cin >> A[i];
            if (A[i] <= Q)
                T[i] = 1;
            else
                T[i] = 0;
        }
        ll reset = 0, ans = 0;
        FOR(i, 0, N - 1)
        {
            if (T[i] == 0)
            {
                if (reset >= K)
                    ans += ((reset - K + 1 )* ((reset - K + 1) + 1)) / 2;
                reset = 0;
            }
            if (T[i] == 1)
            {
                reset++;
            }
        }
        if (reset >= K)
            ans += ((reset - K + 1) * ((reset - K + 1) + 1)) / 2;
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}