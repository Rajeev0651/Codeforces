//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, sum = 0;
  cin >> N;
  if (N <= 2)
  {
    cout << "No\n";
    return;
  }
  int mid;
  if (N % 2 == 0)
    mid = N / 2;
  else
    mid = (N + 1) / 2;
  cout << "Yes\n";
  cout << 1 << " " << mid << "\n";
  cout << N - 1 << " ";
  for (int i = 1; i <= N; i++)
  {
    if (i != mid)
      cout << i << " ";
  }
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}