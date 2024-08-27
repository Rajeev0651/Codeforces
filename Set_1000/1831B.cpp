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
        int A[N], B[N];
        FOR(i, 0, N - 1)
        cin >> A[i];
        FOR(i, 0, N - 1)
        cin >> B[i];
        int ahash[2 * N + 1], bhash[2 * N + 1];
        memset(ahash, 0, sizeof(ahash));
        memset(bhash, 0, sizeof(bhash));
        FOR(i, 0, N - 1)
        {
            if (ahash[A[i]] == 0)
                ahash[A[i]]++;
            if (bhash[B[i]] == 0)
                bhash[B[i]]++;

            if ((i < N - 1) && A[i] == A[i + 1])
            {
                ahash[A[i]]++;
            }
            if ((i < N - 1) && B[i] == B[i + 1])
            {
                bhash[B[i]]++;
            }
        }
        l ans = 0;
        FOR(i, 1, 2 * N)
        {
            if (ahash[i] + bhash[i] >= ans)
            {
                ans = ahash[i] + bhash[i];
            }
        }
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    solve();
    return 0;
}