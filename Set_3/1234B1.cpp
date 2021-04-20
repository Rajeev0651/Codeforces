//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, k;
  cin >> N >> k;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  queue<int> Q;
  set<int> St;
  for (int i = 0; i < N; i++)
  {
    if (St.find(A[i]) == St.end())
    {
      Q.push(A[i]);
      St.insert(A[i]);
      //cout << Q.size() << "\n";
      if (Q.size() > k)
      {
        int x = Q.front();
        St.erase(x);
        Q.pop();
      }
    }
  }
  int s = St.size();
  int ans[s];
  for (int i = 0; i < St.size(); i++)
  {
    ans[i] = Q.front();
    Q.pop();
  }
  cout << s << "\n";
  FOREV(i, s - 1, 0)
  {
    cout << ans[i] << " ";
  }
  cout << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}