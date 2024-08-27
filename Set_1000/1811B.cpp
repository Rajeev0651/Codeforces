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
        int n, x1, x2, y1, y2;
        cin >> n >> x1 >> y1 >> x2 >> y2;
        int k1 = min(min(abs(x1 - 1), abs(y1 - 1)), min(abs(x1 - n), abs(y1 - n)));
        int k2 = min(min(abs(x2 - 1), abs(y2 - 1)), min(abs(x2 - n), abs(y2 - n)));
        cout << abs(k1 - k2) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}