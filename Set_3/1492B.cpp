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
  int A[N + 1];
  int loc[N + 1];
  FOR(i, 1, N)
  {
    cin >> A[i];
    loc[A[i]] = i;
  }
  for (int i = N; i >= 1; i--)
  {
    int index = loc[i];
    if (loc[i] != -2)
    {
      for (int j = index; j <= N; j++)
      {
        if (loc[A[j]] == -2)
          break;
        cout << A[j] << " ";
        loc[A[j]] = -2;
      }
    }
  }
  cout << "\n";
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