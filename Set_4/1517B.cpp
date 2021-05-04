//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, M;
  cin >> N >> M;
  ll A[N][M], ans[N][M];
  vector<ll> V;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> A[i][j];
      ans[i][j] = -1;
      V.push_back(A[i][j]);
    }
  }
  for (int i = 0; i < N; i++)
    sort(A[i], A[i] + M);
  sort(V.begin(), V.end());
  V.resize(M);
  multiset<ll> ms;
  int flag[N], c[N], st[N];
  memset(st, -1, sizeof(st));
  memset(flag, 0, sizeof(flag));
  memset(c, 0, sizeof(c));
  for (int i = 0; i < M; i++)
    ms.insert(V[i]);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      if (ms.find(A[i][j]) != ms.end())
      {
        c[i]++;
        if (st[i] == -1)
        {
          flag[i] = j;
          st[i] = 1;
        }

        ms.erase(ms.lower_bound(A[i][j]));
      }
    }
  }
  // for (int i = 0; i < N; i++)
  // {
  //   cout << flag[i] << " " << c[i] << " ";
  // }
  // cout << "\n";
  int count = 0, x = 0;
  for (int i = 0; i < N; i++)
  {
    x = 0;
    for (int j = flag[i] + count;; j++)
    {
      if (j == M)
        j = 0;
      ans[i][j] = A[i][x++];
      if (x == M)
        break;
    }
    count += c[i];
  }
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
      cout << ans[i][j] << " ";
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