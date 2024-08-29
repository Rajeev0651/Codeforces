// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int n, c, d, z;
    cin >> n >> c >> d;
    vector<int> A, C;
    for (int i = 0; i < n * n; i++)
    {
        cin >> z;
        A.push_back(z);
    }
    sort(A.begin(), A.end());
    int j = A[0], B[n][n], x = A[0];
    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            x = B[i - 1][0] + c;
        for (int j = 0; j < n; j++)
        {
            B[i][j] = x + d * j;
            C.push_back(B[i][j]);
        }
    }
    sort(C.begin(), C.end());
    for (int i = 0; i < n*n; i++)
    {
        if (A[i] != C[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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