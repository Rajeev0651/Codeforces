// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    string s;
    cin >> s;
    ll k = -1, res = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            k = i;
            break;
        }
    }
    for (int i = k; i < s.length(); i++)
    {
        if (s[i] == '0' && k != -1)
        {
            res += (abs(k - i) + 1);
            k++;
        }
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