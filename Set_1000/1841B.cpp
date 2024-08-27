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
        int N;
        cin >> N;
        l A[N], ans[N];
        FOR(i, 0, N - 1)
        {
            cin >> A[i];
        }
        l flag = 0, last = A[0];
        ans[0] = 1;
        FOR(i, 1, N - 1)
        {
            if (A[i] >= A[i - 1])
            {
                ans[i] = 1;
                continue;
            }
            else
            {
                flag = i;
                break;
            }
        }
        last = -1;
        FOR(i, flag, N - 1)
        {
            if ((A[i] <= A[0] && A[i] >= last) || A[i]>=last)
            {
                last = A[i];
                ans[i] = 1;
            }
            else
                ans[i] = 0;
        }
        FOR(i, 0, N - 1)
        cout << ans[i];
        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}