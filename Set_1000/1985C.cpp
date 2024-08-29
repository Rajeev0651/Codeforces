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
    cin >> N;
    ll A[N], prefix_sum[N], max_val[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    prefix_sum[0] = A[0];
    ll res = 0;
    for (int i = 1; i < N; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + A[i];
    }
    ll max_v = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > max_v)
        {
            max_v = A[i];
        }
        max_val[i] = max_v;
    }
    for (int i = 0; i < N; i++)
    {
        if ((prefix_sum[i] - max_val[i]) == max_val[i])
            res++;
    }
    cout <<res << "\n";
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