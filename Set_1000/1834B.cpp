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
        string L, R;
        int ans = 0;
        cin >> L >> R;
        int k = min(L.length(), R.length());
        int len = abs(int(L.length()) - int(R.length()));
        if (L.length() != R.length())
        {
            if (L.length() < R.length())
                L = L.insert(0, len, '0');
            else
                R = R.insert(0, len, '0');
        }
        for (int i = 0; i < min(L.length(), R.length()); i++)
        {
            if (L[i] != R[i])
            {
                ans = abs((L[i] - '0') - (R[i] - '0'));
                k = i;
                break;
            }
        }
        if (k >= 0 && k < L.length())
            ans += (9 * (max(L.length(), R.length()) - k - 1));
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}