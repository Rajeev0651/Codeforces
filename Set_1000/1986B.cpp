// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

bool isValidPos(int i, int j, int n, int m)
{
    if (i < 0 || j < 0 || i > n - 1 || j > m - 1)
        return 0;
    return 1;
}

void solve()
{
    int N, M;
    ll a, b, c, d;
    cin >> N >> M;
    ll X[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> X[i][j];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            a = isValidPos(i, j - 1, N, M) ? X[i][j - 1] : 9999999999;
            b = isValidPos(i - 1, j, N, M) ? X[i - 1][j] : 9999999999;
            c = isValidPos(i + 1, j, N, M) ? X[i + 1][j] : 9999999999;
            d = isValidPos(i, j + 1, N, M) ? X[i][j + 1] : 9999999999;
            if (((a != 9999999999) ? X[i][j] > a : true) && ((b != 9999999999) ? X[i][j] > b : true) && ((c != 9999999999) ? X[i][j] > c : true) && ((d != 9999999999) ? X[i][j] > d : true))
            {
                vector<ll> v;
                v.push_back(a);
                v.push_back(b);
                v.push_back(c);
                v.push_back(d);
                sort(v.begin(), v.end());
                for (int k = 3; k >= 0; k--)
                {
                    if (v[k] < X[i][j])
                    {
                        X[i][j] = v[k];
                        break;
                    }
                }
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            cout << X[i][j] << " ";
        cout << "\n";
    }
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