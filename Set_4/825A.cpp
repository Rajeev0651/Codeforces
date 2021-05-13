//Jai Shree Ram
#include <bits/stdc++.h>
using namespace std;

#define l long
#define ll long long
#define FOR(i, a, b) for (auto i = a; i <= b; i++)
#define FOREV(i, a, b) for (auto i = a; i >= b; i--)

void solve()
{
  int N, val = 0;
  cin >> N;
  string S, ans;
  cin >> S;
  S += '1';
  int index = -1;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == '1')
      index = i;
  }
  for (int i = 0; i < N; i++)
  {
    if (i > index)
      break;
    if (S[i] == '1')
    {
      val++;
    }
    else if ((S[i] == '0') && (S[i + 1] == '0'))
    {
      ans += to_string(val);
      val = 0;
      ans += '0';
      i++;
    }
    else
    {
      ans += to_string(val);
      val = 0;
    }
    if (((i == N - 1) || (i == index)) && S[i] == '1')
    {
      ans += to_string(val);
    }
  }
  for (int i = index + 1; i < N; i++)
  {
    ans += '0';
  }
  cout << ans << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  solve();
  return 0;
}