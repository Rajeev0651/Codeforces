//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  int hash[26][2];
  memset(hash, 0, sizeof(hash));
  for (int i = 0; i < N; i++)
  {
    char c = S[i];
    if (hash[c - 'A'][0] == 0)
    {
      hash[c - 'A'][0] = i + 1;
      hash[c - 'A'][1] = i + 1;
    }
    else
      hash[c - 'A'][1] = i + 1;
  }
  // for (int i = 0; i < 26; i++)
  // {
  //   cout << hash[i][0] << " " << hash[i][1] << "\n";
  // }
  int ans[26];
  memset(ans, 0, sizeof(ans));
  int res = 0;
  for (int i = 0; i < N; i++)
  {
    int c = (S[i] - 'A');
    for (int j = 0; j < 26; j++)
    {
      if (j != c && (hash[c][0] != hash[c][1]))
      {
        if ((i + 1 >= hash[j][0]) && (i + 1 <= hash[j][1]))
        {
          ans[j]++;
          res = max(res, ans[j]);
        }
      }
    }
  }
  res++;
  if (res <= K)
    cout << "NO\n";
  else
    cout << "YES\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}