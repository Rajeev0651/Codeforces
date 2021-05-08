//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N;
  cin >> N;
  int A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int left = -1, right = -1;
  FOR(i, 0, N - 2)
  {
    if (abs(A[i] - A[i + 1]) > 1)
    {
      left = i + 1;
      right = i + 2;
    }
  }
  if (left >= 1)
  {
    cout << "YES\n";
    cout << left << " " << right << "\n";
  }
  else
    cout << "NO\n";
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