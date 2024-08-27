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
        string s;
        cin >> s;
        if (s[0] == '?')
            s[0] = '0';
        for (int i = 1; i < s.length(); i++)
        {
            if (s[i] == '?')
                s[i] = s[i - 1];
        }
        cout << s << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}