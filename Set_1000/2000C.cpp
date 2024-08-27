// Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
    int N, K;
    cin >> N;
    long A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> K;
    while (K--)
    {
        string s;
        bool res = true;
        cin >> s;
        if (s.length() != N)
        {
            cout << "NO\n";
            continue;
        }
        long hash[28];
        fill_n(hash, 28, -1);
        set<long> st;
        map<int, char> mp;
        for (int i = 0; i < N; i++)
        {
            if (mp.find(A[i]) == mp.end())
            {
                mp.insert({A[i], s[i]});
            }
            else
            {
                if (mp[A[i]] != s[i])
                {
                    res = false;
                    break;
                }
            }
        }
        map<char, int> mps;
        for (int i = 0; i < N; i++)
        {
            if (mps.find(s[i]) == mps.end())
            {
                mps.insert({s[i], A[i]});
            }
            else
            {
                if (mps[s[i]] != A[i])
                {
                    res = false;
                    break;
                }
            }
        }
        if (res)
            cout << "YES\n";
        else
            cout << "No\n";
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