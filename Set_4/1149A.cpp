//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, c, sum = 0;
  cin >> N;
  int A[N], one = 0, two = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    if (A[i] == 1)
      one++;
    else
      two++;
  }
  if (one >= 1 && two >= 1)
  {
    cout << 2 << " " << 1 << " ";
    two--;
    one--;
  }
  while (two--)
  {
    cout << 2 << " ";
  }
  while (one--)
  {
    cout << 1 << " ";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}