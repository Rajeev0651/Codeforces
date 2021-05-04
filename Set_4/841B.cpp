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
  ll A[N];
  FOR(i, 0, N - 1)
  cin >> A[i];
  int odd = 0, even = 0;
  for (int i = 0; i < N; i++)
  {
    if (A[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  if (odd >= 1)
    cout << "First\n";
  else
    cout << "Second\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();

  return 0;
}