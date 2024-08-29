// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int N, k;
    cin >> N;
    int J[N];
    fill_n(J, N, 0);
    vector<l> A;
    for (int i = 0; i < N; i++)
    {
        cin >> k;
        A.push_back(k);
    }
    sort(A.begin(), A.end());
    bool res = true; int j = -1;
    for (int i = 0; i < N; i++)
    {
        if ((A[i] % A[0]) == 0)
        {
            J[i] = 1;
        }
        else if (j == -1)
        {
            j = i;
        }
    }
    for (int i = j; i < N; i++)
    {
        if (J[i] == 1)
            continue;
        else if (A[i] % A[j] == 0)
            continue;
        else
        {
            res = false;
            break;
        }
    }
    if (res)
        cout << "YES\n";
    else
        cout << "No\n";
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