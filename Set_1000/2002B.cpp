// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int N;
    cin>>N;
    int a[N], b[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> b[i];
    }
    bool rev = false, eq = false;
    for (int i = 0; i < N; i++)
    {
        if (a[i] != b[i])
        {
            rev = true;
            break;
        }
        if (i == N - 1)
            eq = true;
    }
    if (rev == true)
    {
        for (int i = 0; i < N; i++)
        {
            if (a[i] != b[N - i - 1])
                break;
            if(i==N-1)
                eq = true;
        }
    }
    if(eq)
        cout<<"Bob\n";
    else
        cout<<"Alice\n";
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