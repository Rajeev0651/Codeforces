//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N;
  cin >> N;
  ll step = 1;
  while (((step * (step + 1)) / 2) < N)
  {
    step++;
  }
  ll k = (step * (step + 1)) / 2;
  if(k==N)
    cout<<step<<"\n";
  else if (N < (k - 1))
    cout << step << "\n";
  else
    cout << step + 1 << "\n";
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