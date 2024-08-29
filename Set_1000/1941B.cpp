// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int N, flag = 1;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    while (flag == 1)
    {
        int max = 0, index = -1;
        for (int j = 1; j < N - 1; j++)
        {
            if (A[j] == 0)
                continue;
            if (A[j] >= max)
            {
                max = A[j];
                index = j;
            }
        }
        if (index != -1)
        {
            A[index] -= 2;
            A[index - 1]--;
            A[index + 1]--;
        }
        else
            break;
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] != 0)
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