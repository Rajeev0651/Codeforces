// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, b, c, d, res = 0;
    cin >> a >> b >> c >> d;
    int L = max(a, c);
    int R = min(b, d);
    if (L > R)
        res = 1;
    else
    {
        res = abs(L - R);
        if (a < L || c < L)
            res++;
        if (b > R || d > R)
            res++;
    }
    cout << res << "\n";
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