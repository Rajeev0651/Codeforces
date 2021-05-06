//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  ll N, c;
  cin >> N;
  vector<ll> even, odd;
  FOR(i, 0, N - 1)
  {
    cin >> c;
    if (c % 2 == 0)
      even.push_back(c);
    else
      odd.push_back(c);
  }
  ll alice = 0, bob = 0;
  sort(even.begin(), even.end());
  sort(odd.begin(), odd.end());
  ll x = N, flag = 0;
  while (x--)
  {
    if (flag == 0)
    {
      if (odd.empty())
      {
        alice += even.back();
        even.pop_back();
      }
      else if (even.empty())
      {
        odd.pop_back();
      }
      else if (even.back() >= odd.back())
      {
        alice += even.back();
        even.pop_back();
      }
      else
      {
        odd.pop_back();
      }
    }
    else
    {
      if (even.empty())
      {
        bob += odd.back();
        odd.pop_back();
      }
      else if (odd.empty())
      {
        even.pop_back();
      }
      else if (even.back() <= odd.back())
      {
        bob += odd.back();
        odd.pop_back();
      }
      else
      {
        even.pop_back();
      }
    }
    flag = (flag + 1) % 2;
  }
  if (alice > bob)
    cout << "Alice\n";
  else if (bob > alice)
    cout << "Bob\n";
  else
    cout << "Tie\n";
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