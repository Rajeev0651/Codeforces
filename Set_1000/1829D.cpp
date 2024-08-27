// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool divide(int n, int m)
{
    if (n == m)
        return true;
    else if (n < m)
        return false;
    else if (n % 3 != 0)
        return false;
    bool res1 = divide((n * 2) / 3, m);
    bool res2 = divide(n / 3, m);
    if (res1 || res2)
        return true;
    return false;
}

void solve()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        bool res = divide(n, m);
        if (res)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}