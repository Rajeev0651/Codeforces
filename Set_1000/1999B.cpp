// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool e1, e2, f1, f2, g1, g2, h1, h2;
    e1 = a > c;
    e2 = b > d;
    f1 = a > d;
    f2 = b > c;
    g1 = b > c;
    g2 = a > d;
    h1 = b > d;
    h2 = a > c;
    int count = 4;
    if (c > a || d > b)
        count--;
    if (d > a || c > b)
        count--;
    if (c > b || d > a)
        count--;
    if (d > b || c > a)
        count--;
    
    if (c == a && d == b)
        count--;
    if (d == a && c == b)
        count--;
    if (c == b && d == a)
        count--;
    if (d == b && c == a)
        count--;
    cout << count << "\n";
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