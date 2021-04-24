//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, sum = 0;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  map<int, int> mp;
  for (int i = 0; i < N; i++)
  {
    if (mp.find(A[i]) == mp.end())
      mp[A[i]] = 1;
    else
      mp[A[i]]++;
  }
  int mxval = -1;
  for (auto i = mp.begin(); i != mp.end(); i++)
  {
    int k = i->second;
    mxval = max(mxval, k);
    sum += k;
  }
  int rem = sum - mxval;
  if (mp.size() == 1)
  {
    cout << N << "\n";
    return;
  }
  else if (rem <= mxval)
  {
    cout << mxval - rem << "\n";
    return;
  }
  else
  {
    if (sum % 2 == 0)
      cout << 0 << "\n";
    else
      cout << 1 << "\n";
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